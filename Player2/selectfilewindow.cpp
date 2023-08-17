#include "selectfilewindow.h"
#include "ui_selectfilewindow.h"

selectFileWindow::selectFileWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selectFileWindow)
{
    ui->setupUi(this);

    QSettings settings(ORGANIZATION_NAME, APPLICATION_NAME);
    fileLeftName = settings.value("settings/left", "PathL").toString();
    fileRightName = settings.value("settings/right", "PathR").toString();
    skipFramesLeft = settings.value("settings/left1", 0).toInt();
    skipFramesRight = settings.value("settings/right1", 0).toInt();
    ui->labelPathLeft->setText(fileLeftName);
    ui->labelPathRight->setText(fileRightName);
    ui->spinBox_LeftHalf->setValue(skipFramesLeft);
    ui->spinBox_RightHalf->setValue(skipFramesRight);
}

selectFileWindow::~selectFileWindow()
{
    delete ui;
    fileLeftName.~QString();
    fileRightName.~QString();
}

void selectFileWindow::on_pushButtonSelectLeft_clicked()
{
    fileLeftName = QFileDialog::getOpenFileName(this, "Left half", QDir::homePath());
    ui->labelPathLeft->setText(fileLeftName);
}

void selectFileWindow::on_pushButtonSelectRight_clicked()
{
    fileRightName = QFileDialog::getOpenFileName(this, "Right half", QDir::homePath());
    ui->labelPathRight->setText(fileRightName);
}


void selectFileWindow::on_pushButtonPlay_clicked()
{
    QSettings settings(ORGANIZATION_NAME, APPLICATION_NAME);
    settings.setValue(settingsPathToLeft, fileLeftName);
    settings.setValue(settingsPathToRight, fileRightName);
    settings.setValue(settingsFramesToSkipLeft, skipFramesLeft);
    settings.setValue(settingsFramesToSkipRight, skipFramesRight);
    //qDebug() << settings.value(settingsFramesToSkipLeft) << skipFramesLeft
    //         << settings.value(settingsFramesToSkipRight) << skipFramesRight;
    ui->labelPathLeft->setText(fileLeftName);
    ui->labelPathRight->setText(fileRightName);
    if (not(fileLeftName == "" || fileRightName == "")) {// && flagFramesSettings) {
        flagChoice = true;
    }
}


void selectFileWindow::on_pushButtonExit_clicked()
{
    flagExit = true;
}


void selectFileWindow::on_spinBox_LeftHalf_valueChanged(int arg1)
{
    skipFramesLeft = arg1;
}


void selectFileWindow::on_spinBox_RightHalf_valueChanged(int arg2)
{
    skipFramesRight = arg2;
}


/*void selectFileWindow::on_checkBox_framesSettings_toggled(bool checked)
{
    flagFramesSettings = checked;
}*/

