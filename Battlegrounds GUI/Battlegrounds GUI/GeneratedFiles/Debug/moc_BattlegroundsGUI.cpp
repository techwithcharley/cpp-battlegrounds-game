/****************************************************************************
** Meta object code from reading C++ file 'BattlegroundsGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../BattlegroundsGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BattlegroundsGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BattlegroundsGUI_t {
    QByteArrayData data[4];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BattlegroundsGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BattlegroundsGUI_t qt_meta_stringdata_BattlegroundsGUI = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BattlegroundsGUI"
QT_MOC_LITERAL(1, 17, 25), // "on_settingsButton_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 22) // "on_startButton_clicked"

    },
    "BattlegroundsGUI\0on_settingsButton_clicked\0"
    "\0on_startButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BattlegroundsGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BattlegroundsGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BattlegroundsGUI *_t = static_cast<BattlegroundsGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_settingsButton_clicked(); break;
        case 1: _t->on_startButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BattlegroundsGUI::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BattlegroundsGUI.data,
      qt_meta_data_BattlegroundsGUI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BattlegroundsGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BattlegroundsGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BattlegroundsGUI.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BattlegroundsGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_GameSetup_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameSetup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameSetup_t qt_meta_stringdata_GameSetup = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GameSetup"
QT_MOC_LITERAL(1, 10, 23), // "on_acceptButton_clicked"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "GameSetup\0on_acceptButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameSetup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GameSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameSetup *_t = static_cast<GameSetup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_acceptButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GameSetup::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GameSetup.data,
      qt_meta_data_GameSetup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GameSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameSetup.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::GameSetup"))
        return static_cast< Ui::GameSetup*>(this);
    return QDialog::qt_metacast(_clname);
}

int GameSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_UnitPlacement_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnitPlacement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnitPlacement_t qt_meta_stringdata_UnitPlacement = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UnitPlacement"
QT_MOC_LITERAL(1, 14, 24), // "on_confirmButton_clicked"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "UnitPlacement\0on_confirmButton_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnitPlacement[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void UnitPlacement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UnitPlacement *_t = static_cast<UnitPlacement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_confirmButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject UnitPlacement::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UnitPlacement.data,
      qt_meta_data_UnitPlacement,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UnitPlacement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnitPlacement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UnitPlacement.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::UnitPlacement"))
        return static_cast< Ui::UnitPlacement*>(this);
    return QDialog::qt_metacast(_clname);
}

int UnitPlacement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_UserTurn_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserTurn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserTurn_t qt_meta_stringdata_UserTurn = {
    {
QT_MOC_LITERAL(0, 0, 8), // "UserTurn"
QT_MOC_LITERAL(1, 9, 25), // "on_concede_button_clicked"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "UserTurn\0on_concede_button_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserTurn[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void UserTurn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserTurn *_t = static_cast<UserTurn *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_concede_button_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject UserTurn::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UserTurn.data,
      qt_meta_data_UserTurn,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UserTurn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserTurn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserTurn.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::UserTurn"))
        return static_cast< Ui::UserTurn*>(this);
    return QDialog::qt_metacast(_clname);
}

int UserTurn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_DefeatScreen_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DefeatScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DefeatScreen_t qt_meta_stringdata_DefeatScreen = {
    {
QT_MOC_LITERAL(0, 0, 12) // "DefeatScreen"

    },
    "DefeatScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DefeatScreen[] = {

 // content:
       7,       // revision
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

void DefeatScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DefeatScreen::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DefeatScreen.data,
      qt_meta_data_DefeatScreen,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DefeatScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DefeatScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DefeatScreen.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DefeatScreen"))
        return static_cast< Ui::DefeatScreen*>(this);
    return QDialog::qt_metacast(_clname);
}

int DefeatScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
