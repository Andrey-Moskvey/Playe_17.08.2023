#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <string>
#include <iostream>

#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include <opencv2/core/utility.hpp>
#include "opencv2/videoio.hpp"
#include "opencv2/highgui.hpp"
#include <opencv2/opencv.hpp>

#include "doublevideo.h"


#include <QObject>
#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QSlider>
#include <QString>
#include <QCursor>
#include <QPoint>
#include <QWidget>
#include <QMouseEvent>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QKeyEvent>

void displayFrame(QPixmap picture);

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(std::string pathToLeftVid, std::string pathToRightVid,
                int FramesToSkipLeft, int FramesToSkipRight, QWidget *parent = nullptr);
    Ui::MainWindow *ui;
    ~MainWindow();
    int FPS = 4;
    int FPS_orig = FPS;
    int counter = 0;
    int frames = 0;
    std::string timer = "00:00:00";
    std::string length = "/00:00:00";
    std::string pathToLeftVideo;
    std::string pathToRightVideo;
    int skipLeftFrames;
    int skipRightFrames;
    int hh = 0, mm = 0, ss = 0;
    double c = 0;
    int lengthInS = 8587;
    bool flagPlay = true;
    bool flagPlayFreeze;
    bool flagSpeed = false;
    bool flagSize = false;
    bool flagSkip = false;
    bool flagZoom = false;
    //bool flagGetZoomCord = false;
    bool flagGettingZoomCord = false;
    bool flagHighlight = false;
    bool bSuccessSetNewFrame;
    bool flagCapConnection = false;
    int imageWidth = 850, imageHeight = 680;
    int mousePosX  = 0, mousePosY  = 0;
    int mousePosX1 = 0, mousePosY1 = 0;
    int mousePosX2 = 0, mousePosY2 = 0;
    int skipLeft = 0, skipRight = 0;
    DoubleVideo IKI;
    int screenWidth = QWidget::width() - 15, screenHeight = QWidget::height() - 15;

public slots:
    std::string timeFormat(int nn);

private:
    QTimer *tmr;
    QSlider *SliderTime;
    QPoint *mousePoint;
    int k_imgW = 5, k_imgH = 4;
    int k_winW = k_imgW + k_imgH;
    int k_sliW = k_winW;



private slots:
    void updateTime();
    void updateFrame();
    bool isTime();
    //bool isZoom();
    bool isMouseZoom();
    void mousePosition(int&, int&);
    bool isMouseOnPicture(int &x, int &y);
    void cordFormat(int &x, int &y);

    void on_pushButtonPlay_clicked();
    void on_pushButtonSpeed_clicked();
    void on_pushButtonSize_clicked();
    void on_pushButtonZoom_clicked();
    void on_pushButtonSkip_clicked();
    void on_pushButtonSkipAccept_clicked();
    void on_SliderTime_sliderPressed();
    void on_SliderTime_sliderReleased();
    void on_SliderTime_valueChanged(int value);
    void on_spinBox_LeftHalf_valueChanged(int arg1);
    void on_spinBox_RightHalf_valueChanged(int arg1);
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override;
    //void drawRectangle(int x, int y, int width, int height);
    //void QPainter::drawRect(const QRectF &rectangle);


    void changeSpeed(float k, QString speedName);
    void on_radioButtonSpeed_0_toggled(bool checked);
    void on_radioButtonSpeed_1_toggled(bool checked);
    void on_radioButtonSpeed_2_toggled(bool checked);
    void on_radioButtonSpeed_3_toggled(bool checked);
    void on_radioButtonSpeed_4_toggled(bool checked);
    void changeSize(double k, QString sizeName);
    void on_radioButtonSize_0_toggled(bool checked);
    void on_radioButtonSize_1_toggled(bool checked);
    void on_radioButtonSize_2_toggled(bool checked);
    void on_radioButtonSize_3_toggled(bool checked);
    void on_radioButtonSize_4_toggled(bool checked);



protected:
    void paintEvent(QPaintEvent *event);
};

#endif // MAINWINDOW_H
