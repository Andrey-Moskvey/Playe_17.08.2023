#include "doublevideo.h"

//using namespace cv;

DoubleVideo::DoubleVideo(){}

DoubleVideo::~DoubleVideo() {
    cap_left.~VideoCapture();
    cap_right.~VideoCapture();
    pic0.~QImage();
    pic1.~QPixmap();
    frame.~Mat();
    frame_left.~Mat();
    frame_right.~Mat();
}

bool DoubleVideo::skipLeft(int frames) {
    return cap_left.set(cv::CAP_PROP_POS_FRAMES, frames + cap_left.get(cv::CAP_PROP_POS_FRAMES));
}
bool DoubleVideo::skipRight(int frames) {
    return cap_right.set(cv::CAP_PROP_POS_FRAMES, frames + cap_right.get(cv::CAP_PROP_POS_FRAMES));
}


void DoubleVideo::capConnection(std::string pathToLeft, std::string pathToRight, int FramesLeft, int FramesRight) {
    cap_left = cv::VideoCapture(pathToLeft);
    //cap_left = cv::VideoCapture(pathToLeft, cv::CAP_FFMPEG);
    cap_right = cv::VideoCapture(pathToRight);
    //qDebug() << "fps before:" << cap_left.get(cv::CAP_PROP_FPS) << cap_right.get(cv::CAP_PROP_FPS);
    skipLeft(FramesLeft);
    skipRight(FramesRight);
}

bool DoubleVideo::zoomCordFormat(int &xORy, int right) {
    int distance = right / 4;
    if (xORy < distance) {
        xORy = 0;
        return true;
    }
    if (xORy > distance * 3) {
        xORy = distance * 3;
    }
    xORy -= distance;
    return true;
}

bool DoubleVideo::zoomRectCordFormat(int &xORy, int right) {
    if (xORy < 0) {
        xORy = 0;
    }
    if (xORy > right) {
        xORy = right;
    }
    return true;
}

QPixmap DoubleVideo::getNewFrame(int imageWidth, int imageHeight, bool flagHighlight,
                                 int x, int y, int x1, int y1) {
    bSuccess_left = cap_left.read(frame_left);
    bSuccess_right = cap_right.read(frame_right);
    if (bSuccess_left && bSuccess_right)
    {
        cv::hconcat(frame_left, frame_right, frame);
        cv::resize(frame, frame, cv::Size(imageWidth, imageHeight));
        cv::cvtColor(frame, frame,  cv::COLOR_RGB2BGR);
        if (flagHighlight) {
            //qDebug() << "x" << "\t" << "x1" << "\t" << "y" << "\t" << "y1";
            //qDebug() << x << "\t" << x1 << "\t" << y << "\t" << y1;
            minOfTwo(x, x1);
            minOfTwo(y, y1);
            //qDebug() << "x" << "\t" << "x1" << "\t" << "y" << "\t" << "y1";
            //qDebug() << x << "\t" << x1 << "\t" << y << "\t" << y1 << "\t";
            cv::Point p(x, y), p1(x1, y1);
            cv::Scalar colorline(255, 0, 0);
            cv::rectangle(frame, p, p1, colorline);
        }
        pic0 = QImage(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
        pic1 = QPixmap::fromImage(pic0);
    }
    return pic1;
}

QPixmap DoubleVideo::getNewFrame(int imageWidth, int imageHeight, int mx, int my) {
    bSuccess_left = cap_left.read(frame_left);
    bSuccess_right = cap_right.read(frame_right);
    if (bSuccess_left && bSuccess_right)
    {
        cv::hconcat(frame_left, frame_right, frame);
        cv::resize(frame, frame, cv::Size(imageWidth, imageHeight));
        zoomCordFormat(mx, imageWidth);
        zoomCordFormat(my, imageHeight);
        ROI = cv::Rect(mx, my, imageWidth / 2, imageHeight / 2);
        frame = frame(ROI);
        cv::resize(frame, frame, cv::Size(imageWidth, imageHeight));
        cv::cvtColor(frame, frame,  cv::COLOR_RGB2BGR);
        pic0 = QImage(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
        pic1 = QPixmap::fromImage(pic0);
    }
    return pic1;
}
QPixmap DoubleVideo::getNewFrame(int imageWidth, int imageHeight, int mx1, int my1, int mx2, int my2) {
    bSuccess_left = cap_left.read(frame_left);
    bSuccess_right = cap_right.read(frame_right);
    if (bSuccess_left && bSuccess_right)
    {
        cv::hconcat(frame_left, frame_right, frame);
        cv::resize(frame, frame, cv::Size(imageWidth, imageHeight));
        minOfTwo(mx1, mx2);
        minOfTwo(my1, my2);
        zoomRectCordFormat(mx1, imageWidth);
        zoomRectCordFormat(my1, imageHeight);
        zoomRectCordFormat(mx2, imageWidth);
        zoomRectCordFormat(my2, imageHeight);
        int iW = mx2 - mx1, iH = my2 - my1;
        ROI = cv::Rect(mx1, my1, iW, iH);
        frame = frame(ROI);
        k = std::min(imageWidth / iW, imageHeight / iH);
        cv::resize(frame, frame, cv::Size(iW * k, iH * k));
        cv::cvtColor(frame, frame,  cv::COLOR_RGB2BGR);
        pic0 = QImage(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
        pic1 = QPixmap::fromImage(pic0);
        //qDebug() << iW << iW * k << imageWidth << iH << iH * k << imageHeight;
    }
    return pic1;
}

/*QPixmap DoubleVideo::getNewFrame(int imageWidth, int imageHeight, bool isZoom, int mx, int my)
{
    bSuccess_left = cap_left.read(frame_left);
    bSuccess_right = cap_right.read(frame_right);
    if (bSuccess_left && bSuccess_right)
    {
        cv::hconcat(frame_left, frame_right, frame);
        cv::resize(frame, frame, cv::Size(imageWidth, imageHeight));
        if (isZoom) {
            //origImageSize = frame.size();
            //k = origImageSize.width / imageWidth ;
            //qDebug() << mx << " " << my;
            zoomCordFormat(mx, imageWidth);
            zoomCordFormat(my, imageHeight);
            //qDebug() << mx << " " << my;
            //qDebug() << "------------";
            //cv::Rect myROI(10, 10, 100, 100)
            //cv::Rect(mx, imageWidth / 2, my, imageHeight / 2
            //frame = frame(cv::Rect(mx * k, my * k, imageWidth / 2 * k, imageHeight / 2 * k));
            ROI = cv::Rect(mx, my, imageWidth / 2, imageHeight / 2);
            frame = frame(ROI);
        }
        cv::resize(frame, frame, cv::Size(imageWidth, imageHeight));
        cv::cvtColor(frame, frame,  cv::COLOR_RGB2BGR);
        pic0 = QImage(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
        pic1 = QPixmap::fromImage(pic0);
    }
    return pic1;
}

bool DoubleVideo::skipLeft(int frames) {
    for (int i = 0; i < frames; i++) {
        bSuccess_left = cap_left.read(frame_left);
    }
    if (bSuccess_left) {
        return true;
    }
    return false;
    //cap_left.set(cv::CAP_PROP_POS_FRAMES, frames);
}

bool DoubleVideo::skipRight(int frames) {
    for (int i = 0; i < frames; i++) {
        bSuccess_right = cap_right.read(frame_right);
    }
    if (bSuccess_right) {
        return true;
    }
    return false;
}
*/

void DoubleVideo::minOfTwo(int &first, int &second) {
    if (first > second)
    {
        std::swap(first, second);
    }
//    int a = second + first;
//    first = std::min(second, first);
//    second = a - first;
}

bool DoubleVideo::setNewFrame(int pos) {
    //qDebug() <<  cap_left.get(cv::CAP_PROP_POS_FRAMES) << cap_right.get(cv::CAP_PROP_POS_FRAMES);
    bool result = cap_left.set(cv::CAP_PROP_POS_FRAMES, pos) && cap_right.set(cv::CAP_PROP_POS_FRAMES, pos);
    //qDebug() <<  cap_left.get(cv::CAP_PROP_POS_FRAMES) << cap_right.get(cv::CAP_PROP_POS_FRAMES);
    return result;
}
