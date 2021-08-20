/****************************************************************************
** Meta object code from reading C++ file 'mainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/mainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainWindow_t {
    QByteArrayData data[8];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainWindow_t qt_meta_stringdata_mainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "mainWindow"
QT_MOC_LITERAL(1, 11, 15), // "dataButtonClick"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "alButtonClick"
QT_MOC_LITERAL(4, 42, 18), // "networkButtonClick"
QT_MOC_LITERAL(5, 61, 13), // "osButtonCLick"
QT_MOC_LITERAL(6, 75, 11), // "createArray"
QT_MOC_LITERAL(7, 87, 14) // "createLinkList"

    },
    "mainWindow\0dataButtonClick\0\0alButtonClick\0"
    "networkButtonClick\0osButtonCLick\0"
    "createArray\0createLinkList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,
       4,    0,   48,    2, 0x06 /* Public */,
       5,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mainWindow *_t = static_cast<mainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataButtonClick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->alButtonClick(); break;
        case 2: _t->networkButtonClick(); break;
        case 3: _t->osButtonCLick(); break;
        case 4: _t->createArray(); break;
        case 5: _t->createLinkList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (mainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mainWindow::dataButtonClick)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (mainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mainWindow::alButtonClick)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (mainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mainWindow::networkButtonClick)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (mainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mainWindow::osButtonCLick)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject mainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mainWindow.data,
      qt_meta_data_mainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *mainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void mainWindow::dataButtonClick(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mainWindow::alButtonClick()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mainWindow::networkButtonClick()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mainWindow::osButtonCLick()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
