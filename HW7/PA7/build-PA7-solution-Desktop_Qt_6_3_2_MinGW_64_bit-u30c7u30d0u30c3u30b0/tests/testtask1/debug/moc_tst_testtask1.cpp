/****************************************************************************
** Meta object code from reading C++ file 'tst_testtask1.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../PA7-solution/tests/testtask1/tst_testtask1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tst_testtask1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestTask1_t {
    uint offsetsAndSizes[16];
    char stringdata0[10];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[26];
    char stringdata5[21];
    char stringdata6[30];
    char stringdata7[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TestTask1_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_TestTask1_t qt_meta_stringdata_TestTask1 = {
    {
        QT_MOC_LITERAL(0, 9),  // "TestTask1"
        QT_MOC_LITERAL(10, 21),  // "testAnalyzeGuess_data"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 16),  // "testAnalyzeGuess"
        QT_MOC_LITERAL(50, 25),  // "testAnalyzeGuessLong_data"
        QT_MOC_LITERAL(76, 20),  // "testAnalyzeGuessLong"
        QT_MOC_LITERAL(97, 29),  // "testAnalyzeGuessVeryLong_data"
        QT_MOC_LITERAL(127, 24)   // "testAnalyzeGuessVeryLong"
    },
    "TestTask1",
    "testAnalyzeGuess_data",
    "",
    "testAnalyzeGuess",
    "testAnalyzeGuessLong_data",
    "testAnalyzeGuessLong",
    "testAnalyzeGuessVeryLong_data",
    "testAnalyzeGuessVeryLong"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestTask1[] = {

 // content:
      10,       // revision
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
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestTask1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestTask1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->testAnalyzeGuess_data(); break;
        case 1: _t->testAnalyzeGuess(); break;
        case 2: _t->testAnalyzeGuessLong_data(); break;
        case 3: _t->testAnalyzeGuessLong(); break;
        case 4: _t->testAnalyzeGuessVeryLong_data(); break;
        case 5: _t->testAnalyzeGuessVeryLong(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject TestTask1::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TestTask1.offsetsAndSizes,
    qt_meta_data_TestTask1,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TestTask1_t
, QtPrivate::TypeAndForceComplete<TestTask1, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TestTask1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestTask1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestTask1.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestTask1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
