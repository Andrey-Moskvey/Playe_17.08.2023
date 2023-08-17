/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelTimeViewer;
    QSlider *SliderTime;
    QPushButton *pushButtonPlay;
    QLabel *labelFrameImg;
    QGroupBox *groupBoxSpeed;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonSpeed_4;
    QRadioButton *radioButtonSpeed_3;
    QRadioButton *radioButtonSpeed_2;
    QRadioButton *radioButtonSpeed_1;
    QRadioButton *radioButtonSpeed_0;
    QPushButton *pushButtonSpeed;
    QGroupBox *groupBoxSize;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonSize_0;
    QRadioButton *radioButtonSize_1;
    QRadioButton *radioButtonSize_2;
    QRadioButton *radioButtonSize_3;
    QRadioButton *radioButtonSize_4;
    QPushButton *pushButtonSize;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(5000, 4200);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        labelTimeViewer = new QLabel(centralwidget);
        labelTimeViewer->setObjectName("labelTimeViewer");
        labelTimeViewer->setGeometry(QRect(10, 750, 281, 20));
        SliderTime = new QSlider(centralwidget);
        SliderTime->setObjectName("SliderTime");
        SliderTime->setGeometry(QRect(10, 720, 1500, 18));
        SliderTime->setOrientation(Qt::Horizontal);
        pushButtonPlay = new QPushButton(centralwidget);
        pushButtonPlay->setObjectName("pushButtonPlay");
        pushButtonPlay->setGeometry(QRect(720, 740, 80, 30));
        labelFrameImg = new QLabel(centralwidget);
        labelFrameImg->setObjectName("labelFrameImg");
        labelFrameImg->setGeometry(QRect(345, 10, 850, 680));
        groupBoxSpeed = new QGroupBox(centralwidget);
        groupBoxSpeed->setObjectName("groupBoxSpeed");
        groupBoxSpeed->setEnabled(true);
        groupBoxSpeed->setGeometry(QRect(0, 30, 100, 140));
        QFont font;
        font.setKerning(true);
        groupBoxSpeed->setFont(font);
        verticalLayoutWidget_2 = new QWidget(groupBoxSpeed);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 0, 61, 141));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButtonSpeed_4 = new QRadioButton(verticalLayoutWidget_2);
        radioButtonSpeed_4->setObjectName("radioButtonSpeed_4");

        verticalLayout_2->addWidget(radioButtonSpeed_4);

        radioButtonSpeed_3 = new QRadioButton(verticalLayoutWidget_2);
        radioButtonSpeed_3->setObjectName("radioButtonSpeed_3");

        verticalLayout_2->addWidget(radioButtonSpeed_3);

        radioButtonSpeed_2 = new QRadioButton(verticalLayoutWidget_2);
        radioButtonSpeed_2->setObjectName("radioButtonSpeed_2");

        verticalLayout_2->addWidget(radioButtonSpeed_2);

        radioButtonSpeed_1 = new QRadioButton(verticalLayoutWidget_2);
        radioButtonSpeed_1->setObjectName("radioButtonSpeed_1");
        radioButtonSpeed_1->setChecked(true);

        verticalLayout_2->addWidget(radioButtonSpeed_1);

        radioButtonSpeed_0 = new QRadioButton(verticalLayoutWidget_2);
        radioButtonSpeed_0->setObjectName("radioButtonSpeed_0");
        radioButtonSpeed_0->setEnabled(true);

        verticalLayout_2->addWidget(radioButtonSpeed_0);

        pushButtonSpeed = new QPushButton(centralwidget);
        pushButtonSpeed->setObjectName("pushButtonSpeed");
        pushButtonSpeed->setGeometry(QRect(0, 0, 100, 30));
        groupBoxSize = new QGroupBox(centralwidget);
        groupBoxSize->setObjectName("groupBoxSize");
        groupBoxSize->setEnabled(true);
        groupBoxSize->setGeometry(QRect(1425, 30, 95, 150));
        groupBoxSize->setFont(font);
        verticalLayoutWidget = new QWidget(groupBoxSize);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 110, 160));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtonSize_0 = new QRadioButton(verticalLayoutWidget);
        radioButtonSize_0->setObjectName("radioButtonSize_0");
        radioButtonSize_0->setEnabled(true);

        verticalLayout->addWidget(radioButtonSize_0);

        radioButtonSize_1 = new QRadioButton(verticalLayoutWidget);
        radioButtonSize_1->setObjectName("radioButtonSize_1");
        radioButtonSize_1->setChecked(false);

        verticalLayout->addWidget(radioButtonSize_1);

        radioButtonSize_2 = new QRadioButton(verticalLayoutWidget);
        radioButtonSize_2->setObjectName("radioButtonSize_2");

        verticalLayout->addWidget(radioButtonSize_2);

        radioButtonSize_3 = new QRadioButton(verticalLayoutWidget);
        radioButtonSize_3->setObjectName("radioButtonSize_3");
        radioButtonSize_3->setChecked(true);

        verticalLayout->addWidget(radioButtonSize_3);

        radioButtonSize_4 = new QRadioButton(verticalLayoutWidget);
        radioButtonSize_4->setObjectName("radioButtonSize_4");

        verticalLayout->addWidget(radioButtonSize_4);

        pushButtonSize = new QPushButton(centralwidget);
        pushButtonSize->setObjectName("pushButtonSize");
        pushButtonSize->setGeometry(QRect(1425, 0, 95, 30));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 5000, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelTimeViewer->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        pushButtonPlay->setText(QCoreApplication::translate("MainWindow", "Stop/Start", nullptr));
        labelFrameImg->setText(QString());
        groupBoxSpeed->setTitle(QString());
        radioButtonSpeed_4->setText(QCoreApplication::translate("MainWindow", "10.0", nullptr));
        radioButtonSpeed_3->setText(QCoreApplication::translate("MainWindow", "5.0", nullptr));
        radioButtonSpeed_2->setText(QCoreApplication::translate("MainWindow", "2.0", nullptr));
        radioButtonSpeed_1->setText(QCoreApplication::translate("MainWindow", "1.0", nullptr));
        radioButtonSpeed_0->setText(QCoreApplication::translate("MainWindow", "0.5", nullptr));
        pushButtonSpeed->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214: 1.0", nullptr));
        groupBoxSize->setTitle(QString());
        radioButtonSize_0->setText(QCoreApplication::translate("MainWindow", "Orig", nullptr));
        radioButtonSize_1->setText(QCoreApplication::translate("MainWindow", "4K", nullptr));
        radioButtonSize_2->setText(QCoreApplication::translate("MainWindow", "1/2 Orig", nullptr));
        radioButtonSize_3->setText(QCoreApplication::translate("MainWindow", "HD", nullptr));
        radioButtonSize_4->setText(QCoreApplication::translate("MainWindow", "1/2 HD", nullptr));
        pushButtonSize->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200: HD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
