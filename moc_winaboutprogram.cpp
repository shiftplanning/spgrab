/****************************************************************************
** Meta object code from reading C++ file 'winaboutprogram.h'
**
** Created: Fri Dec 7 17:37:54 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "winaboutprogram.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'winaboutprogram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_winAboutProgram[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_winAboutProgram[] = {
    "winAboutProgram\0"
};

void winAboutProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData winAboutProgram::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject winAboutProgram::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_winAboutProgram,
      qt_meta_data_winAboutProgram, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &winAboutProgram::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *winAboutProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *winAboutProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_winAboutProgram))
        return static_cast<void*>(const_cast< winAboutProgram*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int winAboutProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
