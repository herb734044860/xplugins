/****************************************************************************
** Meta object code from reading C++ file 'radarmap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ExtPlane-Panel/widgetui/panelitems/radarmap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radarmap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RadarMap_t {
    QByteArrayData data[12];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadarMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadarMap_t qt_meta_stringdata_RadarMap = {
    {
QT_MOC_LITERAL(0, 0, 8), // "RadarMap"
QT_MOC_LITERAL(1, 9, 8), // "tickTime"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 2), // "dt"
QT_MOC_LITERAL(4, 22, 5), // "total"
QT_MOC_LITERAL(5, 28, 14), // "setMonitorFade"
QT_MOC_LITERAL(6, 43, 3), // "val"
QT_MOC_LITERAL(7, 47, 13), // "setSweepSpeed"
QT_MOC_LITERAL(8, 61, 14), // "ExtPlanePanel*"
QT_MOC_LITERAL(9, 76, 5), // "panel"
QT_MOC_LITERAL(10, 82, 19), // "ExtPlaneConnection*"
QT_MOC_LITERAL(11, 102, 4) // "conn"

    },
    "RadarMap\0tickTime\0\0dt\0total\0setMonitorFade\0"
    "val\0setSweepSpeed\0ExtPlanePanel*\0panel\0"
    "ExtPlaneConnection*\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadarMap[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   45, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       5,    1,   34,    2, 0x0a /* Public */,
       7,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 8, 0x80000000 | 10,    9,   11,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   40,    2, 0x0e /* Public */,

       0        // eod
};

void RadarMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { RadarMap *_r = new RadarMap((*reinterpret_cast< ExtPlanePanel*(*)>(_a[1])),(*reinterpret_cast< ExtPlaneConnection*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RadarMap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tickTime((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->setMonitorFade((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setSweepSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RadarMap::staticMetaObject = { {
    &MapInstrument::staticMetaObject,
    qt_meta_stringdata_RadarMap.data,
    qt_meta_data_RadarMap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RadarMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadarMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadarMap.stringdata0))
        return static_cast<void*>(this);
    return MapInstrument::qt_metacast(_clname);
}

int RadarMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapInstrument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
