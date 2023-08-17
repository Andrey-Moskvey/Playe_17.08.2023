win32:CONFIG(release, debug|release): LIBS += -LD:/dev/cv/opencv-3.4.3-vc14_vc15/build/x64/vc15/lib/ -lopencv_world343
else:win32:CONFIG(debug, debug|release): LIBS += -LD:/dev/cv/opencv-3.4.3-vc14_vc15/build/x64/vc15/lib/ -lopencv_world343d

INCLUDEPATH += D:/dev/cv/opencv-3.4.3-vc14_vc15/build/include
DEPENDPATH += D:/dev/cv/opencv-3.4.3-vc14_vc15/build/include