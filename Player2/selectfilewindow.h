#ifndef SELECTFILEWINDOW_H
#define SELECTFILEWINDOW_H

#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QDir>
#include <QSettings>

//#include <iostream>

#define ORGANIZATION_NAME "IKI"
#define ORGANIZATION_DOMAIN "www.iki.com"
#define APPLICATION_NAME "Player"

#define settingsPathToLeft "settings/left"
#define settingsPathToRight "settings/right"
#define settingsFramesToSkipLeft "settings/left1"
#define settingsFramesToSkipRight "settings/right1"

namespace Ui {
class selectFileWindow;
}

class selectFileWindow : public QDialog
{
    Q_OBJECT

public:
    explicit selectFileWindow(QWidget *parent = nullptr);
    ~selectFileWindow();
    QString fileLeftName = "";
    QString fileRightName = "";
    int skipFramesLeft = 0;
    int skipFramesRight = 0;
    bool flagChoice = false;
    bool flagExit = false;
    //bool flagFramesSettings = true;

private slots:
    void on_pushButtonSelectLeft_clicked();
    void on_pushButtonSelectRight_clicked();
    void on_pushButtonPlay_clicked();
    void on_pushButtonExit_clicked();

    void on_spinBox_LeftHalf_valueChanged(int arg1);
    void on_spinBox_RightHalf_valueChanged(int arg2);

    //void on_checkBox_framesSettings_toggled(bool checked);

private:
    Ui::selectFileWindow *ui;
};


#endif // SELECTFILEWINDOW_H
