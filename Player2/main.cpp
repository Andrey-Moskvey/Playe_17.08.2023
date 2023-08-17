#include "mainwindow.h"
#include "selectfilewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::setOrganizationName(ORGANIZATION_NAME);
    QCoreApplication::setOrganizationDomain(ORGANIZATION_DOMAIN);
    QCoreApplication::setApplicationName(APPLICATION_NAME);
    selectFileWindow c;
    c.show();
    while (!c.flagExit) {
        while (!c.flagChoice && !c.flagExit) {
            cv::waitKey(1000);
            if (c.flagExit) {
                c.close();
            }
        }
        if (!c.flagExit) {
            c.flagChoice = false;
            MainWindow w(c.fileLeftName.toStdString(), c.fileRightName.toStdString(), c.skipFramesLeft, c.skipFramesRight);
            w.show();
            while (w.isActiveWindow()) {
                cv::waitKey(1000);
            }
        }
    }
    return a.exec();
}
