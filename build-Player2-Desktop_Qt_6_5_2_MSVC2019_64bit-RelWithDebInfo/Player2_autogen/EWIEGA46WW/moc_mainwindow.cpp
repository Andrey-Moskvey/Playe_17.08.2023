/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Player2/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "timeFormat",
    "std::string",
    "",
    "nn",
    "updateTime",
    "updateFrame",
    "isTime",
    "isMouseZoom",
    "mousePosition",
    "int&",
    "isMouseOnPicture",
    "x",
    "y",
    "cordFormat",
    "on_pushButtonPlay_clicked",
    "on_pushButtonSpeed_clicked",
    "on_pushButtonSize_clicked",
    "on_pushButtonZoom_clicked",
    "on_pushButtonSkip_clicked",
    "on_pushButtonSkipAccept_clicked",
    "on_SliderTime_sliderPressed",
    "on_SliderTime_sliderReleased",
    "on_SliderTime_valueChanged",
    "value",
    "on_spinBox_LeftHalf_valueChanged",
    "arg1",
    "on_spinBox_RightHalf_valueChanged",
    "mousePressEvent",
    "QMouseEvent*",
    "event",
    "mouseReleaseEvent",
    "keyPressEvent",
    "QKeyEvent*",
    "keyReleaseEvent",
    "changeSpeed",
    "k",
    "speedName",
    "on_radioButtonSpeed_0_toggled",
    "checked",
    "on_radioButtonSpeed_1_toggled",
    "on_radioButtonSpeed_2_toggled",
    "on_radioButtonSpeed_3_toggled",
    "on_radioButtonSpeed_4_toggled",
    "changeSize",
    "sizeName",
    "on_radioButtonSize_0_toggled",
    "on_radioButtonSize_1_toggled",
    "on_radioButtonSize_2_toggled",
    "on_radioButtonSize_3_toggled",
    "on_radioButtonSize_4_toggled"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[102];
    char stringdata0[11];
    char stringdata1[11];
    char stringdata2[12];
    char stringdata3[1];
    char stringdata4[3];
    char stringdata5[11];
    char stringdata6[12];
    char stringdata7[7];
    char stringdata8[12];
    char stringdata9[14];
    char stringdata10[5];
    char stringdata11[17];
    char stringdata12[2];
    char stringdata13[2];
    char stringdata14[11];
    char stringdata15[26];
    char stringdata16[27];
    char stringdata17[26];
    char stringdata18[26];
    char stringdata19[26];
    char stringdata20[32];
    char stringdata21[28];
    char stringdata22[29];
    char stringdata23[27];
    char stringdata24[6];
    char stringdata25[33];
    char stringdata26[5];
    char stringdata27[34];
    char stringdata28[16];
    char stringdata29[13];
    char stringdata30[6];
    char stringdata31[18];
    char stringdata32[14];
    char stringdata33[11];
    char stringdata34[16];
    char stringdata35[12];
    char stringdata36[2];
    char stringdata37[10];
    char stringdata38[30];
    char stringdata39[8];
    char stringdata40[30];
    char stringdata41[30];
    char stringdata42[30];
    char stringdata43[30];
    char stringdata44[11];
    char stringdata45[9];
    char stringdata46[29];
    char stringdata47[29];
    char stringdata48[29];
    char stringdata49[29];
    char stringdata50[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 10),  // "timeFormat"
        QT_MOC_LITERAL(22, 11),  // "std::string"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 2),  // "nn"
        QT_MOC_LITERAL(38, 10),  // "updateTime"
        QT_MOC_LITERAL(49, 11),  // "updateFrame"
        QT_MOC_LITERAL(61, 6),  // "isTime"
        QT_MOC_LITERAL(68, 11),  // "isMouseZoom"
        QT_MOC_LITERAL(80, 13),  // "mousePosition"
        QT_MOC_LITERAL(94, 4),  // "int&"
        QT_MOC_LITERAL(99, 16),  // "isMouseOnPicture"
        QT_MOC_LITERAL(116, 1),  // "x"
        QT_MOC_LITERAL(118, 1),  // "y"
        QT_MOC_LITERAL(120, 10),  // "cordFormat"
        QT_MOC_LITERAL(131, 25),  // "on_pushButtonPlay_clicked"
        QT_MOC_LITERAL(157, 26),  // "on_pushButtonSpeed_clicked"
        QT_MOC_LITERAL(184, 25),  // "on_pushButtonSize_clicked"
        QT_MOC_LITERAL(210, 25),  // "on_pushButtonZoom_clicked"
        QT_MOC_LITERAL(236, 25),  // "on_pushButtonSkip_clicked"
        QT_MOC_LITERAL(262, 31),  // "on_pushButtonSkipAccept_clicked"
        QT_MOC_LITERAL(294, 27),  // "on_SliderTime_sliderPressed"
        QT_MOC_LITERAL(322, 28),  // "on_SliderTime_sliderReleased"
        QT_MOC_LITERAL(351, 26),  // "on_SliderTime_valueChanged"
        QT_MOC_LITERAL(378, 5),  // "value"
        QT_MOC_LITERAL(384, 32),  // "on_spinBox_LeftHalf_valueChanged"
        QT_MOC_LITERAL(417, 4),  // "arg1"
        QT_MOC_LITERAL(422, 33),  // "on_spinBox_RightHalf_valueCha..."
        QT_MOC_LITERAL(456, 15),  // "mousePressEvent"
        QT_MOC_LITERAL(472, 12),  // "QMouseEvent*"
        QT_MOC_LITERAL(485, 5),  // "event"
        QT_MOC_LITERAL(491, 17),  // "mouseReleaseEvent"
        QT_MOC_LITERAL(509, 13),  // "keyPressEvent"
        QT_MOC_LITERAL(523, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(534, 15),  // "keyReleaseEvent"
        QT_MOC_LITERAL(550, 11),  // "changeSpeed"
        QT_MOC_LITERAL(562, 1),  // "k"
        QT_MOC_LITERAL(564, 9),  // "speedName"
        QT_MOC_LITERAL(574, 29),  // "on_radioButtonSpeed_0_toggled"
        QT_MOC_LITERAL(604, 7),  // "checked"
        QT_MOC_LITERAL(612, 29),  // "on_radioButtonSpeed_1_toggled"
        QT_MOC_LITERAL(642, 29),  // "on_radioButtonSpeed_2_toggled"
        QT_MOC_LITERAL(672, 29),  // "on_radioButtonSpeed_3_toggled"
        QT_MOC_LITERAL(702, 29),  // "on_radioButtonSpeed_4_toggled"
        QT_MOC_LITERAL(732, 10),  // "changeSize"
        QT_MOC_LITERAL(743, 8),  // "sizeName"
        QT_MOC_LITERAL(752, 28),  // "on_radioButtonSize_0_toggled"
        QT_MOC_LITERAL(781, 28),  // "on_radioButtonSize_1_toggled"
        QT_MOC_LITERAL(810, 28),  // "on_radioButtonSize_2_toggled"
        QT_MOC_LITERAL(839, 28),  // "on_radioButtonSize_3_toggled"
        QT_MOC_LITERAL(868, 28)   // "on_radioButtonSize_4_toggled"
    },
    "MainWindow",
    "timeFormat",
    "std::string",
    "",
    "nn",
    "updateTime",
    "updateFrame",
    "isTime",
    "isMouseZoom",
    "mousePosition",
    "int&",
    "isMouseOnPicture",
    "x",
    "y",
    "cordFormat",
    "on_pushButtonPlay_clicked",
    "on_pushButtonSpeed_clicked",
    "on_pushButtonSize_clicked",
    "on_pushButtonZoom_clicked",
    "on_pushButtonSkip_clicked",
    "on_pushButtonSkipAccept_clicked",
    "on_SliderTime_sliderPressed",
    "on_SliderTime_sliderReleased",
    "on_SliderTime_valueChanged",
    "value",
    "on_spinBox_LeftHalf_valueChanged",
    "arg1",
    "on_spinBox_RightHalf_valueChanged",
    "mousePressEvent",
    "QMouseEvent*",
    "event",
    "mouseReleaseEvent",
    "keyPressEvent",
    "QKeyEvent*",
    "keyReleaseEvent",
    "changeSpeed",
    "k",
    "speedName",
    "on_radioButtonSpeed_0_toggled",
    "checked",
    "on_radioButtonSpeed_1_toggled",
    "on_radioButtonSpeed_2_toggled",
    "on_radioButtonSpeed_3_toggled",
    "on_radioButtonSpeed_4_toggled",
    "changeSize",
    "sizeName",
    "on_radioButtonSize_0_toggled",
    "on_radioButtonSize_1_toggled",
    "on_radioButtonSize_2_toggled",
    "on_radioButtonSize_3_toggled",
    "on_radioButtonSize_4_toggled"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  224,    3, 0x0a,    1 /* Public */,
       5,    0,  227,    3, 0x08,    3 /* Private */,
       6,    0,  228,    3, 0x08,    4 /* Private */,
       7,    0,  229,    3, 0x08,    5 /* Private */,
       8,    0,  230,    3, 0x08,    6 /* Private */,
       9,    2,  231,    3, 0x08,    7 /* Private */,
      11,    2,  236,    3, 0x08,   10 /* Private */,
      14,    2,  241,    3, 0x08,   13 /* Private */,
      15,    0,  246,    3, 0x08,   16 /* Private */,
      16,    0,  247,    3, 0x08,   17 /* Private */,
      17,    0,  248,    3, 0x08,   18 /* Private */,
      18,    0,  249,    3, 0x08,   19 /* Private */,
      19,    0,  250,    3, 0x08,   20 /* Private */,
      20,    0,  251,    3, 0x08,   21 /* Private */,
      21,    0,  252,    3, 0x08,   22 /* Private */,
      22,    0,  253,    3, 0x08,   23 /* Private */,
      23,    1,  254,    3, 0x08,   24 /* Private */,
      25,    1,  257,    3, 0x08,   26 /* Private */,
      27,    1,  260,    3, 0x08,   28 /* Private */,
      28,    1,  263,    3, 0x08,   30 /* Private */,
      31,    1,  266,    3, 0x08,   32 /* Private */,
      32,    1,  269,    3, 0x08,   34 /* Private */,
      34,    1,  272,    3, 0x08,   36 /* Private */,
      35,    2,  275,    3, 0x08,   38 /* Private */,
      38,    1,  280,    3, 0x08,   41 /* Private */,
      40,    1,  283,    3, 0x08,   43 /* Private */,
      41,    1,  286,    3, 0x08,   45 /* Private */,
      42,    1,  289,    3, 0x08,   47 /* Private */,
      43,    1,  292,    3, 0x08,   49 /* Private */,
      44,    2,  295,    3, 0x08,   51 /* Private */,
      46,    1,  300,    3, 0x08,   54 /* Private */,
      47,    1,  303,    3, 0x08,   56 /* Private */,
      48,    1,  306,    3, 0x08,   58 /* Private */,
      49,    1,  309,    3, 0x08,   60 /* Private */,
      50,    1,  312,    3, 0x08,   62 /* Private */,

 // slots: parameters
    0x80000000 | 2, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,    3,    3,
    QMetaType::Bool, 0x80000000 | 10, 0x80000000 | 10,   12,   13,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 33,   30,
    QMetaType::Void, 0x80000000 | 33,   30,
    QMetaType::Void, QMetaType::Float, QMetaType::QString,   36,   37,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   36,   45,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, QMetaType::Bool,   39,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'timeFormat'
        QtPrivate::TypeAndForceComplete<std::string, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isTime'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isMouseZoom'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'mousePosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int &, std::false_type>,
        // method 'isMouseOnPicture'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int &, std::false_type>,
        // method 'cordFormat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int &, std::false_type>,
        // method 'on_pushButtonPlay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSpeed_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSize_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonZoom_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSkip_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSkipAccept_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SliderTime_sliderPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SliderTime_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SliderTime_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_LeftHalf_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_RightHalf_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mousePressEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'mouseReleaseEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'keyPressEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'keyReleaseEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'changeSpeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_radioButtonSpeed_0_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButtonSpeed_1_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButtonSpeed_2_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButtonSpeed_3_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButtonSpeed_4_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'changeSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_radioButtonSize_0_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButtonSize_1_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButtonSize_2_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButtonSize_3_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButtonSize_4_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { std::string _r = _t->timeFormat((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->updateTime(); break;
        case 2: _t->updateFrame(); break;
        case 3: { bool _r = _t->isTime();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->isMouseZoom();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->mousePosition((*reinterpret_cast< std::add_pointer_t<int&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int&>>(_a[2]))); break;
        case 6: { bool _r = _t->isMouseOnPicture((*reinterpret_cast< std::add_pointer_t<int&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int&>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->cordFormat((*reinterpret_cast< std::add_pointer_t<int&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int&>>(_a[2]))); break;
        case 8: _t->on_pushButtonPlay_clicked(); break;
        case 9: _t->on_pushButtonSpeed_clicked(); break;
        case 10: _t->on_pushButtonSize_clicked(); break;
        case 11: _t->on_pushButtonZoom_clicked(); break;
        case 12: _t->on_pushButtonSkip_clicked(); break;
        case 13: _t->on_pushButtonSkipAccept_clicked(); break;
        case 14: _t->on_SliderTime_sliderPressed(); break;
        case 15: _t->on_SliderTime_sliderReleased(); break;
        case 16: _t->on_SliderTime_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_spinBox_LeftHalf_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_spinBox_RightHalf_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->mousePressEvent((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 20: _t->mouseReleaseEvent((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 21: _t->keyPressEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 22: _t->keyReleaseEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 23: _t->changeSpeed((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 24: _t->on_radioButtonSpeed_0_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->on_radioButtonSpeed_1_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->on_radioButtonSpeed_2_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->on_radioButtonSpeed_3_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->on_radioButtonSpeed_4_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 29: _t->changeSize((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 30: _t->on_radioButtonSize_0_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->on_radioButtonSize_1_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->on_radioButtonSize_2_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->on_radioButtonSize_3_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->on_radioButtonSize_4_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 35;
    }
    return _id;
}
QT_WARNING_POP
