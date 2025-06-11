#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QAction>
#include <QApplication>
#include <QColorDialog>
#include <QFileDialog>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QMessageBox>
#include <QSettings>

#include "view/glview.h"
#include "view/record_media.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
using namespace s21;
class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  void saveSettings();
  void loadSettings();
  void create_menu();
  void connect_buttons_signals();

 private:
  Ui::MainWindow *ui;
  QSettings *myGlSettings;
  RecordMedia myMedia;
  int flag = 0;
 private slots:
  void open_file();
  void onSliderLinesValueChanged(int value);
  void onSliderVerticesValueChanged(int value);
  void onScaleSliderValueChanged(int value);
  void actionSet_background_color_triggered();
  void actionSet_color_lines_triggered();
  void actionSet_color_vertices_triggered();
  void action_None_triggered();
  void actionSquere_triggered();
  void actionCircle_triggered();
  void actionSet_Dashed_triggered();
  void actionSet_Solid_triggered();
  void onDecreaseLinesButtonClicked();
  void onIncreaseLinesButtonClicked();
  void onDecreaseVerticesButtonClicked();
  void onIncreaseVerticesButtonClicked();
  void onScrinshotButtonClicked();
  void onGIFButtonClicked();
  void action_bmp_triggered();
  void action_jpg_triggered();
  void onIncreaseScaleButtonClicked();
  void onDecreaseScaleButtonClicked();
  void onMoveXDoubleSpinBoxChanged(double value);
  void onMoveYDoubleSpinBoxChanged(double value);
  void onMoveZDoubleSpinBoxChanged(double value);
  void onSpinXDoubleSpinBoxChanged(double value);
  void onSpinYDoubleSpinBoxChanged(double value);
  void onSpinZDoubleSpinBoxChanged(double value);
  void onXCheckBoxChanged();
  void onYCheckBoxChanged();
  void onZCheckBoxChanged();

 signals:
  void backColorChanged(const QColor &color);
  void verticesColorChanged(const QColor &color);
  void linesColorChanged(const QColor &color);
  void verticeTypeChanged(const int &type);
  void linesTypeChanged(const int &type);
  void linesWidthChanged(const float &width);
  void verticesWidthChanged(const float &width);
  void arrayChanged(const double &scale, Mode key);
  void checkboxChanged(Mode key);
  void removeCheckboxState(Mode key);
};
#endif  // MAINWINDOW_H
