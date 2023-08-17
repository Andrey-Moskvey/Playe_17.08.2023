/****************************************************************************
** Meta object code from reading C++ file 'selectfilewindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Player2/selectfilewindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectfilewindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSselectFileWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSselectFileWindowENDCLASS = QtMocHelpers::stringData(
    "selectFileWindow",
    "on_pushButtonSelectLeft_clicked",
    "",
    "on_pushButtonSelectRight_clicked",
    "on_pushButtonPlay_clicked",
    "on_pushButtonExit_clicked",
    "on_spinBox_LeftHalf_valueChanged",
    "arg1",
    "on_spinBox_RightHalf_valueChanged",
    "arg2"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSselectFileWindowENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[17];
    char stringdata1[32];
    char stringdata2[1];
    char stringdata3[33];
    char stringdata4[26];
    char stringdata5[26];
    char stringdata6[33];
    char stringdata7[5];
    char stringdata8[34];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSselectFileWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSselectFileWindowENDCLASS_t qt_meta_stringdata_CLASSselectFileWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "selectFileWindow"
        QT_MOC_LITERAL(17, 31),  // "on_pushButtonSelectLeft_clicked"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 32),  // "on_pushButtonSelectRight_clicked"
        QT_MOC_LITERAL(83, 25),  // "on_pushButtonPlay_clicked"
        QT_MOC_LITERAL(109, 25),  // "on_pushButtonExit_clicked"
        QT_MOC_LITERAL(135, 32),  // "on_spinBox_LeftHalf_valueChanged"
        QT_MOC_LITERAL(168, 4),  // "arg1"
        QT_MOC_LITERAL(173, 33),  // "on_spinBox_RightHalf_valueCha..."
        QT_MOC_LITERAL(207, 4)   // "arg2"
    },
    "selectFileWindow",
    "on_pushButtonSelectLeft_clicked",
    "",
    "on_pushButtonSelectRight_clicked",
    "on_pushButtonPlay_clicked",
    "on_pushButtonExit_clicked",
    "on_spinBox_LeftHalf_valueChanged",
    "arg1",
    "on_spinBox_RightHalf_valueChanged",
    "arg2"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSselectFileWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    1,   54,    2, 0x08,    5 /* Private */,
       8,    1,   57,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject selectFileWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSselectFileWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSselectFileWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSselectFileWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<selectFileWindow, std::true_type>,
        // method 'on_pushButtonSelectLeft_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSelectRight_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonPlay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonExit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spinBox_LeftHalf_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_RightHalf_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void selectFileWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<selectFileWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButtonSelectLeft_clicked(); break;
        case 1: _t->on_pushButtonSelectRight_clicked(); break;
        case 2: _t->on_pushButtonPlay_clicked(); break;
        case 3: _t->on_pushButtonExit_clicked(); break;
        case 4: _t->on_spinBox_LeftHalf_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_spinBox_RightHalf_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *selectFileWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *selectFileWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSselectFileWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int selectFileWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
