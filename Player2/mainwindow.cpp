#include "mainwindow.h"
#include "./ui_mainwindow.h"

std::string MainWindow::timeFormat(int nn) {
    if (nn < 10) {
        return "0" + std::to_string(nn);
    } else {
        return std::to_string(nn);
    }
}

MainWindow::MainWindow(std::string pathToLeftVid, std::string pathToRightVid,
                       int FramesToSkipLeft, int FramesToSkipRight, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QPainter painter(this);
    tmr = new QTimer();
    SliderTime = new QSlider(Qt::Horizontal);
    ui->SliderTime->setMinimum(0);
    ui->SliderTime->setMaximum(lengthInS);
    SliderTime->setSingleStep(1);
    length = "/" + timeFormat(lengthInS / 3600) +
             ":" + timeFormat((lengthInS % 3600) / 60) +
             ":" + timeFormat(lengthInS % 60);
    tmr->setInterval(900/FPS);
    connect(tmr, SIGNAL(timeout()), this, SLOT(updateTime()));
    connect(tmr, SIGNAL(timeout()), this, SLOT(updateFrame()));
    connect(tmr, SIGNAL(timeout()), this, SLOT(isMouseZoom()));
    //connect(tmr, SIGNAL(timeout()), this, SLOT(isZoom()));
    tmr->start();
    pathToLeftVideo = pathToLeftVid;
    pathToRightVideo = pathToRightVid;
    skipLeftFrames = FramesToSkipLeft;
    skipRightFrames = FramesToSkipRight;
    ui->groupBoxSpeed->setVisible(flagSpeed);
    ui->groupBoxSize->setVisible(flagSize);
    ui->groupBoxSkip->setVisible(flagSkip);
}

MainWindow::~MainWindow()
{
    delete ui;
    tmr->~QTimer();
    SliderTime->~QSlider();
}

bool MainWindow::isTime() {
    if (flagPlay && hh * 3600 + mm * 60 + ss < lengthInS) {
        return true;
    }
    return false;
}

void MainWindow::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setPen(QPen(Qt::red, 1, Qt::SolidLine, Qt::FlatCap));
    QRectF inAktiv(0, 0, 0, 0);
    QRectF rectangle(mousePosX1, mousePosY1, 100, 200);
    if (flagHighlight) {
        painter.drawRect(rectangle);
        //qDebug() << "Activ";
        //qDebug() << mousePosX << mousePosY;
    }
    if (!flagHighlight) {
        painter.drawRect(inAktiv);
        //qDebug() << "inActiv";
    }
}

void MainWindow::mousePosition(int &x, int &y){
    x = QWidget::mapFromGlobal(QCursor::pos()).x();
    y = QWidget::mapFromGlobal(QCursor::pos()).y();
}
bool MainWindow::isMouseOnPicture(int &x, int &y) {
    if (mousePosX > ui->labelFrameImg->geometry().x() &&
        mousePosX < ui->labelFrameImg->geometry().x() + imageWidth &&
        mousePosY > ui->labelFrameImg->geometry().y() &&
        mousePosY <  ui->labelFrameImg->geometry().y() + imageHeight) {
        //qDebug() << 1;
        return true;
    }
    return false;
}
bool MainWindow::isMouseZoom() {
    mousePosition(mousePosX, mousePosY);
    if (flagZoom) {
        //qDebug() << "1";
        return false;
    }
    if (isMouseOnPicture(mousePosX, mousePosY)){
        return true;
    }
    return false;
}

void MainWindow::cordFormat(int &x, int &y) {
    x -= ui->labelFrameImg->geometry().x();
    y -= ui->labelFrameImg->geometry().y();
}

void MainWindow::updateFrame()
{
    if (!flagCapConnection) {
        IKI.DoubleVideo::capConnection(pathToLeftVideo, pathToRightVideo, skipLeftFrames, skipRightFrames);
        flagCapConnection = true;
        //FPS_orig = IKI.cap_left.get(cv::CAP_PROP_FPS);
        //qDebug() << "fps:" << IKI.cap_left.get(cv::CAP_PROP_FPS);
        //FPS = FPS_orig;

        //lengthInS = IKI.cap_left.get(cv::CAP_PROP_FRAME_COUNT) / FPS_orig;
        ui->SliderTime->setMaximum(lengthInS);
        length = "/" + timeFormat(lengthInS / 3600) +
                 ":" + timeFormat((lengthInS % 3600) / 60) +
                 ":" + timeFormat(lengthInS % 60);
        MainWindow::changeSize(85, "1/2 FHD");
        //DoubleVideo::skipLeft(skipLeftFrames);
        //DoubleVideo::skipRight(skipRightFrames);
    }
    if (isTime()) {
        //qDebug() << mousePosX1 << " " << mousePosY1 << " " << mousePosX2 << " " << mousePosY2;
        if (flagZoom) { // && flagGetZoomCord) {
            //qDebug() << "2";
            //qDebug() << mousePosX1 << " " << mousePosY1 << " " << mousePosX2 << " " << mousePosY2;
            ui->labelFrameImg->setPixmap(IKI.DoubleVideo::getNewFrame(imageWidth, imageHeight,
                                                                      mousePosX1, mousePosY1, mousePosX2, mousePosY2));
        }
        //qDebug() << isMouseZoom() << !flagZoom << !flagGettingZoomCord;
        if (isMouseZoom() && !flagZoom && !flagGettingZoomCord) {
            //qDebug() << "3";
            cordFormat(mousePosX, mousePosY);
            ui->labelFrameImg->setPixmap(IKI.DoubleVideo::getNewFrame(imageWidth, imageHeight, mousePosX, mousePosY));
        }
        if (!flagZoom && (!isMouseZoom() or flagGettingZoomCord)) {
            //qDebug() << "4";
            cordFormat(mousePosX, mousePosY);
            ui->labelFrameImg->setPixmap(IKI.DoubleVideo::getNewFrame(imageWidth, imageHeight, flagHighlight,
                                                                      mousePosX, mousePosY, mousePosX1, mousePosY1));
        }

    }
}

void MainWindow::updateTime()
{
    if (isTime()) {
        c++;
        //repaint();
    }
    if (c >= FPS_orig) {
        ss += 1;
        c = 0;
        screenWidth = QWidget::width() - 50;
        screenHeight = QWidget::height() - 50;
        //painter.drawRect(0, 0, 100, 2000);
        //qDebug() << screenWidth << " " << screenHeight;
    }
    if (ss == 60) {
        mm++;
        ss = 0;
    }
    if (mm == 60) {
        hh++;
        mm = 0;
    }
    counter = hh * 3600 + mm * 60 + ss;
    ui->SliderTime->setSliderPosition(counter);
    //ui->SliderTime->setValue(counter);
    timer = timeFormat(hh) + ":" + timeFormat(mm) + ":" + timeFormat(ss) + length;
    ui->labelTimeViewer->setText(QString::fromStdString(timer));
}

void MainWindow::on_pushButtonPlay_clicked()
{
    if (flagPlay) {
        flagPlay = false;
    } else {
        flagPlay = true;
    }
}
void MainWindow::on_pushButtonSpeed_clicked()
{
    if (flagSpeed) {
        flagSpeed = false;
    } else {
        flagSpeed = true;
    }
    ui->groupBoxSpeed->setVisible(flagSpeed);
}
void MainWindow::on_pushButtonSize_clicked()
{
    if (flagSize) {
        flagSize = false;
    } else {
        flagSize = true;
    }
    ui->groupBoxSize->setVisible(flagSize);
}
void MainWindow::on_pushButtonZoom_clicked() {
    if (flagZoom) {
        flagZoom = false;
        //flagGetZoomCord = false;
    }
    if (!flagZoom) {
        //qDebug() << "5";
        flagGettingZoomCord = true;
    }
}
void MainWindow::on_pushButtonSkip_clicked()
{
    if (flagSkip) {
        flagSkip = false;
    } else {
        flagSkip = true;
    }
    ui->groupBoxSkip->setVisible(flagSkip);
}
void MainWindow::on_pushButtonSkipAccept_clicked() {
    //DoubleVideo::skipLeft(ui->)
    //qDebug() << "Left" << skipLeft << "Right" << skipRight;
    flagPlay = false;
    IKI.DoubleVideo::skipLeft(skipLeft);
    IKI.DoubleVideo::skipRight(skipRight);
    ui->spinBox_LeftHalf->setValue(0);
    ui->spinBox_RightHalf->setValue(0);
    flagPlay = true;
}

void MainWindow::on_SliderTime_sliderPressed()
{
    flagPlayFreeze = flagPlay;
    flagPlay = false;
}
void MainWindow::on_SliderTime_sliderReleased()
{
    flagPlay = flagPlayFreeze;
    //qDebug() << (ui->SliderTime->value()) * FPS_orig;
    bSuccessSetNewFrame = IKI.DoubleVideo::setNewFrame((100) * FPS_orig);
    //qDebug() << "after";
}
void MainWindow::on_SliderTime_valueChanged(int value)
{
    hh = value / 3600;
    mm = (value % 3600) / 60;
    ss = value % 60;
}
void MainWindow::on_spinBox_LeftHalf_valueChanged(int arg1)
{
    skipLeft = arg1;
    //qDebug() << "Left" << skipLeft;
}
void MainWindow::on_spinBox_RightHalf_valueChanged(int arg2)
{
    skipRight = arg2;
    //qDebug() << "Right" << skipRight;
}


void MainWindow::mousePressEvent(QMouseEvent *event){
    //qDebug() << "7";
    if (flagGettingZoomCord) { // && !flagGetZoomCord) {
        //qDebug() << "9";
        flagHighlight = true;
        mousePosition(mousePosX1, mousePosY1);
        cordFormat(mousePosX1, mousePosY1);
    }
}
void MainWindow::mouseReleaseEvent(QMouseEvent *event){
    //qDebug() << "8" << flagZoom << !flagGetZoomCord;
    if (flagGettingZoomCord) { // && !flagGetZoomCord) {
        flagHighlight = false;
        mousePosition(mousePosX2, mousePosY2);
        cordFormat(mousePosX2, mousePosY2);
        //flagGetZoomCord = true;
        flagGettingZoomCord = false;
        flagZoom = true;
        //qDebug() << "6";
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    //qDebug() << "9";
    //if (event->key() == Qt::CTRL) {
    if (event->modifiers().testFlag(Qt::ControlModifier)) {
        //qDebug() << "7";
        if (!flagZoom) {
            //qDebug() << "5";
            flagGettingZoomCord = true;
        }
        if (flagZoom) {
            //qDebug() << "3";
            flagZoom = false;
            //qDebug() << flagZoom << flagGettingZoomCord;
            //flagGetZoomCord = false;
        }
    }
    if (event->key() == Qt::Key_Space) {
        if (flagPlay) {
            flagPlay = false;
        } else {
            flagPlay = true;
        }
    }
}
void MainWindow::keyReleaseEvent(QKeyEvent *event) {
    //qDebug() << "10";
    //if (event->key() == Qt::CTRL) {
    if (event->modifiers().testFlag(Qt::ControlModifier)) {
        //qDebug() << "8";
        if (flagGettingZoomCord) { // && !flagGetZoomCord) {
            flagHighlight = false;
            mousePosition(mousePosX2, mousePosY2);
            cordFormat(mousePosX2, mousePosY2);
            //flagGetZoomCord = true;
            flagGettingZoomCord = false;
            flagZoom = true;
            //qDebug() << "6";
        }
    }
}

void MainWindow::changeSpeed(float k, QString speedName)
{
    FPS = FPS_orig * k;
    ui->pushButtonSpeed->setText(speedName);
    tmr->setInterval(900/FPS);
}

void MainWindow::on_radioButtonSpeed_0_toggled(bool checked)
{
    if (checked) {
        changeSpeed(0.5, "0.5");
    }
}
void MainWindow::on_radioButtonSpeed_1_toggled(bool checked)
{
    if (checked) {
        changeSpeed(1, "1.0");
    }
}
void MainWindow::on_radioButtonSpeed_2_toggled(bool checked)
{
    if (checked) {
        changeSpeed(2, "2.0");
    }
}
void MainWindow::on_radioButtonSpeed_3_toggled(bool checked)
{
    if (checked) {
        changeSpeed(5, "5.0");
    }
}
void MainWindow::on_radioButtonSpeed_4_toggled(bool checked)
{
    if (checked) {
        changeSpeed(10, "10.0");
    }
}


void MainWindow::changeSize(double k, QString sizeName) {
    if (k_winW * k > screenWidth) {
        k = screenWidth / k_winW;
        //qDebug() << "width";
    }
    imageWidth = k_imgW * k;
    imageHeight = k_imgH * k;

    ui->pushButtonSize->setText("Размер: " + sizeName);
    ui->pushButtonPlay->setGeometry(k_sliW * k / 2 - 40, imageHeight + 60, 80, 30);
    ui->SliderTime->setGeometry(10, imageHeight + 40, k_sliW * k, 18);

    ui->pushButtonZoom->setGeometry(k_sliW * k - 90, imageHeight + 60, 80, 30);
    ui->pushButtonSize->setGeometry(k_winW * k - 100, 0, 95, 30);
    ui->pushButtonSpeed->setGeometry(0, 0, 100, 30);
    ui->pushButtonSkip->setGeometry(0, 170, 100, 30);
    ui->groupBoxSize->setGeometry(k_winW * k - 100, 30, 95, 150);
    ui->groupBoxSpeed->setGeometry(0, 30, 100, 140);
    ui->groupBoxSkip->setGeometry(0, 200, 100, 90);

    ui->labelTimeViewer->setGeometry(10, imageHeight + 70, 100, 20);
    ui->labelFrameImg->setGeometry((k_winW * k - k_imgW * k) / 2, 10, imageWidth, imageHeight);

    //QWidget::setFixedSize(k_winW * k, imageHeight + 120);
}

void MainWindow::on_radioButtonSize_0_toggled(bool checked) {
    if (checked) {
        MainWindow::changeSize(986, "Orig");
    }
}
void MainWindow::on_radioButtonSize_1_toggled(bool checked) {
    if (checked) {
        MainWindow::changeSize(816, "4K");
    }
}
void MainWindow::on_radioButtonSize_2_toggled(bool checked) {
    if (checked) {
        MainWindow::changeSize(510, "1/2 Orig");
    }
}
void MainWindow::on_radioButtonSize_3_toggled(bool checked) {
    if (checked) {
        MainWindow::changeSize(170, "FHD");
    }
}
void MainWindow::on_radioButtonSize_4_toggled(bool checked) {
    if (checked) {
        MainWindow::changeSize(85, "1/2 FHD");
    }
}
