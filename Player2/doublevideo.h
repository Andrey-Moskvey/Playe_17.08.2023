#ifndef DOUBLEVIDEO_H
#define DOUBLEVIDEO_H

#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include <opencv2/core/utility.hpp>
#include "opencv2/videoio.hpp"
#include "opencv2/highgui.hpp"
#include <opencv2/opencv.hpp>

#include <QWidget>
#include <QObject>
#include <QDebug>
#include <QImage>
#include <QPixmap>
#include <QtGlobal>

#include <string>
#include <algorithm>

class DoubleVideo : public QObject
{
    Q_OBJECT
public:
    DoubleVideo();
    ~DoubleVideo();
    void capConnection(std::string pathToLeft, std::string pathToRight, int FramesLeft, int FramesRight);
    QPixmap getNewFrame(int imageWidth, int imageHeight, bool flagHighlight = false,
                        int x = 0, int y = 0, int x1 = 0, int y1 = 0);
    QPixmap getNewFrame(int imageWidth, int imageHeight, int mx, int my);
    QPixmap getNewFrame(int imageWidth, int imageHeight, int mx1, int my1, int mx2, int my2);
    cv::VideoCapture cap_left;
    cv::VideoCapture cap_right;
    bool setNewFrame(int pos);
    bool zoomCordFormat(int &xORy, int right);
    bool zoomRectCordFormat(int &xORy, int right);
    void minOfTwo(int &first, int &second);
    bool skipLeft(int frames);
    bool skipRight(int frames);

    int origImageWidth = 5536, origImageHeight = 3680;
private:
    int k;
    cv::Rect ROI;
    QImage pic0;
    QPixmap pic1;
    cv::Mat frame, frame_left, frame_right;
    bool bSuccess_left;
    bool bSuccess_right;

};

#endif // DOUBLEVIDEO_H
