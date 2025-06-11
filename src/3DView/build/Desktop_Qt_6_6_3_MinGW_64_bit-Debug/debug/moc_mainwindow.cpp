/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
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
#error "This file was generated using the moc from 6.6.3. It"
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
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "backColorChanged",
    "",
    "color",
    "verticesColorChanged",
    "linesColorChanged",
    "verticeTypeChanged",
    "type",
    "linesTypeChanged",
    "linesWidthChanged",
    "width",
    "verticesWidthChanged",
    "arrayChanged",
    "scale",
    "Mode",
    "key",
    "checkboxChanged",
    "removeCheckboxState",
    "open_file",
    "onSliderLinesValueChanged",
    "value",
    "onSliderVerticesValueChanged",
    "onScaleSliderValueChanged",
    "actionSet_background_color_triggered",
    "actionSet_color_lines_triggered",
    "actionSet_color_vertices_triggered",
    "action_None_triggered",
    "actionSquere_triggered",
    "actionCircle_triggered",
    "actionSet_Dashed_triggered",
    "actionSet_Solid_triggered",
    "onDecreaseLinesButtonClicked",
    "onIncreaseLinesButtonClicked",
    "onDecreaseVerticesButtonClicked",
    "onIncreaseVerticesButtonClicked",
    "onScrinshotButtonClicked",
    "onGIFButtonClicked",
    "action_bmp_triggered",
    "action_jpg_triggered",
    "onIncreaseScaleButtonClicked",
    "onDecreaseScaleButtonClicked",
    "onMoveXDoubleSpinBoxChanged",
    "onMoveYDoubleSpinBoxChanged",
    "onMoveZDoubleSpinBoxChanged",
    "onSpinXDoubleSpinBoxChanged",
    "onSpinYDoubleSpinBoxChanged",
    "onSpinZDoubleSpinBoxChanged",
    "onXCheckBoxChanged",
    "onYCheckBoxChanged",
    "onZCheckBoxChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[100];
    char stringdata0[11];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[21];
    char stringdata5[18];
    char stringdata6[19];
    char stringdata7[5];
    char stringdata8[17];
    char stringdata9[18];
    char stringdata10[6];
    char stringdata11[21];
    char stringdata12[13];
    char stringdata13[6];
    char stringdata14[5];
    char stringdata15[4];
    char stringdata16[16];
    char stringdata17[20];
    char stringdata18[10];
    char stringdata19[26];
    char stringdata20[6];
    char stringdata21[29];
    char stringdata22[26];
    char stringdata23[37];
    char stringdata24[32];
    char stringdata25[35];
    char stringdata26[22];
    char stringdata27[23];
    char stringdata28[23];
    char stringdata29[27];
    char stringdata30[26];
    char stringdata31[29];
    char stringdata32[29];
    char stringdata33[32];
    char stringdata34[32];
    char stringdata35[25];
    char stringdata36[19];
    char stringdata37[21];
    char stringdata38[21];
    char stringdata39[29];
    char stringdata40[29];
    char stringdata41[28];
    char stringdata42[28];
    char stringdata43[28];
    char stringdata44[28];
    char stringdata45[28];
    char stringdata46[28];
    char stringdata47[19];
    char stringdata48[19];
    char stringdata49[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 16),  // "backColorChanged"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 5),  // "color"
        QT_MOC_LITERAL(35, 20),  // "verticesColorChanged"
        QT_MOC_LITERAL(56, 17),  // "linesColorChanged"
        QT_MOC_LITERAL(74, 18),  // "verticeTypeChanged"
        QT_MOC_LITERAL(93, 4),  // "type"
        QT_MOC_LITERAL(98, 16),  // "linesTypeChanged"
        QT_MOC_LITERAL(115, 17),  // "linesWidthChanged"
        QT_MOC_LITERAL(133, 5),  // "width"
        QT_MOC_LITERAL(139, 20),  // "verticesWidthChanged"
        QT_MOC_LITERAL(160, 12),  // "arrayChanged"
        QT_MOC_LITERAL(173, 5),  // "scale"
        QT_MOC_LITERAL(179, 4),  // "Mode"
        QT_MOC_LITERAL(184, 3),  // "key"
        QT_MOC_LITERAL(188, 15),  // "checkboxChanged"
        QT_MOC_LITERAL(204, 19),  // "removeCheckboxState"
        QT_MOC_LITERAL(224, 9),  // "open_file"
        QT_MOC_LITERAL(234, 25),  // "onSliderLinesValueChanged"
        QT_MOC_LITERAL(260, 5),  // "value"
        QT_MOC_LITERAL(266, 28),  // "onSliderVerticesValueChanged"
        QT_MOC_LITERAL(295, 25),  // "onScaleSliderValueChanged"
        QT_MOC_LITERAL(321, 36),  // "actionSet_background_color_tr..."
        QT_MOC_LITERAL(358, 31),  // "actionSet_color_lines_triggered"
        QT_MOC_LITERAL(390, 34),  // "actionSet_color_vertices_trig..."
        QT_MOC_LITERAL(425, 21),  // "action_None_triggered"
        QT_MOC_LITERAL(447, 22),  // "actionSquere_triggered"
        QT_MOC_LITERAL(470, 22),  // "actionCircle_triggered"
        QT_MOC_LITERAL(493, 26),  // "actionSet_Dashed_triggered"
        QT_MOC_LITERAL(520, 25),  // "actionSet_Solid_triggered"
        QT_MOC_LITERAL(546, 28),  // "onDecreaseLinesButtonClicked"
        QT_MOC_LITERAL(575, 28),  // "onIncreaseLinesButtonClicked"
        QT_MOC_LITERAL(604, 31),  // "onDecreaseVerticesButtonClicked"
        QT_MOC_LITERAL(636, 31),  // "onIncreaseVerticesButtonClicked"
        QT_MOC_LITERAL(668, 24),  // "onScrinshotButtonClicked"
        QT_MOC_LITERAL(693, 18),  // "onGIFButtonClicked"
        QT_MOC_LITERAL(712, 20),  // "action_bmp_triggered"
        QT_MOC_LITERAL(733, 20),  // "action_jpg_triggered"
        QT_MOC_LITERAL(754, 28),  // "onIncreaseScaleButtonClicked"
        QT_MOC_LITERAL(783, 28),  // "onDecreaseScaleButtonClicked"
        QT_MOC_LITERAL(812, 27),  // "onMoveXDoubleSpinBoxChanged"
        QT_MOC_LITERAL(840, 27),  // "onMoveYDoubleSpinBoxChanged"
        QT_MOC_LITERAL(868, 27),  // "onMoveZDoubleSpinBoxChanged"
        QT_MOC_LITERAL(896, 27),  // "onSpinXDoubleSpinBoxChanged"
        QT_MOC_LITERAL(924, 27),  // "onSpinYDoubleSpinBoxChanged"
        QT_MOC_LITERAL(952, 27),  // "onSpinZDoubleSpinBoxChanged"
        QT_MOC_LITERAL(980, 18),  // "onXCheckBoxChanged"
        QT_MOC_LITERAL(999, 18),  // "onYCheckBoxChanged"
        QT_MOC_LITERAL(1018, 18)   // "onZCheckBoxChanged"
    },
    "MainWindow",
    "backColorChanged",
    "",
    "color",
    "verticesColorChanged",
    "linesColorChanged",
    "verticeTypeChanged",
    "type",
    "linesTypeChanged",
    "linesWidthChanged",
    "width",
    "verticesWidthChanged",
    "arrayChanged",
    "scale",
    "Mode",
    "key",
    "checkboxChanged",
    "removeCheckboxState",
    "open_file",
    "onSliderLinesValueChanged",
    "value",
    "onSliderVerticesValueChanged",
    "onScaleSliderValueChanged",
    "actionSet_background_color_triggered",
    "actionSet_color_lines_triggered",
    "actionSet_color_vertices_triggered",
    "action_None_triggered",
    "actionSquere_triggered",
    "actionCircle_triggered",
    "actionSet_Dashed_triggered",
    "actionSet_Solid_triggered",
    "onDecreaseLinesButtonClicked",
    "onIncreaseLinesButtonClicked",
    "onDecreaseVerticesButtonClicked",
    "onIncreaseVerticesButtonClicked",
    "onScrinshotButtonClicked",
    "onGIFButtonClicked",
    "action_bmp_triggered",
    "action_jpg_triggered",
    "onIncreaseScaleButtonClicked",
    "onDecreaseScaleButtonClicked",
    "onMoveXDoubleSpinBoxChanged",
    "onMoveYDoubleSpinBoxChanged",
    "onMoveZDoubleSpinBoxChanged",
    "onSpinXDoubleSpinBoxChanged",
    "onSpinYDoubleSpinBoxChanged",
    "onSpinZDoubleSpinBoxChanged",
    "onXCheckBoxChanged",
    "onYCheckBoxChanged",
    "onZCheckBoxChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  260,    2, 0x06,    1 /* Public */,
       4,    1,  263,    2, 0x06,    3 /* Public */,
       5,    1,  266,    2, 0x06,    5 /* Public */,
       6,    1,  269,    2, 0x06,    7 /* Public */,
       8,    1,  272,    2, 0x06,    9 /* Public */,
       9,    1,  275,    2, 0x06,   11 /* Public */,
      11,    1,  278,    2, 0x06,   13 /* Public */,
      12,    2,  281,    2, 0x06,   15 /* Public */,
      16,    1,  286,    2, 0x06,   18 /* Public */,
      17,    1,  289,    2, 0x06,   20 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      18,    0,  292,    2, 0x08,   22 /* Private */,
      19,    1,  293,    2, 0x08,   23 /* Private */,
      21,    1,  296,    2, 0x08,   25 /* Private */,
      22,    1,  299,    2, 0x08,   27 /* Private */,
      23,    0,  302,    2, 0x08,   29 /* Private */,
      24,    0,  303,    2, 0x08,   30 /* Private */,
      25,    0,  304,    2, 0x08,   31 /* Private */,
      26,    0,  305,    2, 0x08,   32 /* Private */,
      27,    0,  306,    2, 0x08,   33 /* Private */,
      28,    0,  307,    2, 0x08,   34 /* Private */,
      29,    0,  308,    2, 0x08,   35 /* Private */,
      30,    0,  309,    2, 0x08,   36 /* Private */,
      31,    0,  310,    2, 0x08,   37 /* Private */,
      32,    0,  311,    2, 0x08,   38 /* Private */,
      33,    0,  312,    2, 0x08,   39 /* Private */,
      34,    0,  313,    2, 0x08,   40 /* Private */,
      35,    0,  314,    2, 0x08,   41 /* Private */,
      36,    0,  315,    2, 0x08,   42 /* Private */,
      37,    0,  316,    2, 0x08,   43 /* Private */,
      38,    0,  317,    2, 0x08,   44 /* Private */,
      39,    0,  318,    2, 0x08,   45 /* Private */,
      40,    0,  319,    2, 0x08,   46 /* Private */,
      41,    1,  320,    2, 0x08,   47 /* Private */,
      42,    1,  323,    2, 0x08,   49 /* Private */,
      43,    1,  326,    2, 0x08,   51 /* Private */,
      44,    1,  329,    2, 0x08,   53 /* Private */,
      45,    1,  332,    2, 0x08,   55 /* Private */,
      46,    1,  335,    2, 0x08,   57 /* Private */,
      47,    0,  338,    2, 0x08,   59 /* Private */,
      48,    0,  339,    2, 0x08,   60 /* Private */,
      49,    0,  340,    2, 0x08,   61 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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
        // method 'backColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'verticesColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'linesColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'verticeTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'linesTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'linesWidthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float &, std::false_type>,
        // method 'verticesWidthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const float &, std::false_type>,
        // method 'arrayChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mode, std::false_type>,
        // method 'checkboxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mode, std::false_type>,
        // method 'removeCheckboxState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mode, std::false_type>,
        // method 'open_file'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSliderLinesValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onSliderVerticesValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onScaleSliderValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'actionSet_background_color_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionSet_color_lines_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionSet_color_vertices_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'action_None_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionSquere_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionCircle_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionSet_Dashed_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actionSet_Solid_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDecreaseLinesButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onIncreaseLinesButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDecreaseVerticesButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onIncreaseVerticesButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScrinshotButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onGIFButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'action_bmp_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'action_jpg_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onIncreaseScaleButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDecreaseScaleButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMoveXDoubleSpinBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onMoveYDoubleSpinBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onMoveZDoubleSpinBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onSpinXDoubleSpinBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onSpinYDoubleSpinBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onSpinZDoubleSpinBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onXCheckBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onYCheckBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onZCheckBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->backColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->verticesColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 2: _t->linesColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 3: _t->verticeTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->linesTypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->linesWidthChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 6: _t->verticesWidthChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 7: _t->arrayChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Mode>>(_a[2]))); break;
        case 8: _t->checkboxChanged((*reinterpret_cast< std::add_pointer_t<Mode>>(_a[1]))); break;
        case 9: _t->removeCheckboxState((*reinterpret_cast< std::add_pointer_t<Mode>>(_a[1]))); break;
        case 10: _t->open_file(); break;
        case 11: _t->onSliderLinesValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->onSliderVerticesValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->onScaleSliderValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->actionSet_background_color_triggered(); break;
        case 15: _t->actionSet_color_lines_triggered(); break;
        case 16: _t->actionSet_color_vertices_triggered(); break;
        case 17: _t->action_None_triggered(); break;
        case 18: _t->actionSquere_triggered(); break;
        case 19: _t->actionCircle_triggered(); break;
        case 20: _t->actionSet_Dashed_triggered(); break;
        case 21: _t->actionSet_Solid_triggered(); break;
        case 22: _t->onDecreaseLinesButtonClicked(); break;
        case 23: _t->onIncreaseLinesButtonClicked(); break;
        case 24: _t->onDecreaseVerticesButtonClicked(); break;
        case 25: _t->onIncreaseVerticesButtonClicked(); break;
        case 26: _t->onScrinshotButtonClicked(); break;
        case 27: _t->onGIFButtonClicked(); break;
        case 28: _t->action_bmp_triggered(); break;
        case 29: _t->action_jpg_triggered(); break;
        case 30: _t->onIncreaseScaleButtonClicked(); break;
        case 31: _t->onDecreaseScaleButtonClicked(); break;
        case 32: _t->onMoveXDoubleSpinBoxChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 33: _t->onMoveYDoubleSpinBoxChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 34: _t->onMoveZDoubleSpinBoxChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 35: _t->onSpinXDoubleSpinBoxChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 36: _t->onSpinYDoubleSpinBoxChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 37: _t->onSpinZDoubleSpinBoxChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 38: _t->onXCheckBoxChanged(); break;
        case 39: _t->onYCheckBoxChanged(); break;
        case 40: _t->onZCheckBoxChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QColor & );
            if (_t _q_method = &MainWindow::backColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QColor & );
            if (_t _q_method = &MainWindow::verticesColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QColor & );
            if (_t _q_method = &MainWindow::linesColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const int & );
            if (_t _q_method = &MainWindow::verticeTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const int & );
            if (_t _q_method = &MainWindow::linesTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const float & );
            if (_t _q_method = &MainWindow::linesWidthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const float & );
            if (_t _q_method = &MainWindow::verticesWidthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const double & , Mode );
            if (_t _q_method = &MainWindow::arrayChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(Mode );
            if (_t _q_method = &MainWindow::checkboxChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(Mode );
            if (_t _q_method = &MainWindow::removeCheckboxState; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
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
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::backColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::verticesColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::linesColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::verticeTypeChanged(const int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::linesTypeChanged(const int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::linesWidthChanged(const float & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::verticesWidthChanged(const float & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::arrayChanged(const double & _t1, Mode _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::checkboxChanged(Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::removeCheckboxState(Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
