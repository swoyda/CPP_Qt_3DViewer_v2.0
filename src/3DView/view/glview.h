#ifndef GLVIEW_H
#define GLVIEW_H
#include <GL/gl.h>

#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QtOpenGL>

#include "../model/facade.h"
#include "../model/parser.h"
namespace s21 {

typedef enum { none = 0, circle, square } VerticeTypes;
typedef enum { dashed = 0, solid } LinesTypes;
class glview : public QOpenGLWidget {
  //    Q_OBJECT
 public:
  QColor getbackgroundColor() { return backgroundColor; }
  void setbackgroundColor(QColor a) {
    backgroundColor = a;
    update();
  }
  QColor getverticesColor() { return verticesColor; }
  void setverticesColor(QColor a) {
    verticesColor = a;
    update();
  }
  int getverticesType() { return verticeTypes; }
  void setverticesType(int a) {
    verticeTypes = a;
    update();
  }
  QColor getlinesColor() { return linesColor; }
  void setlinesColor(QColor a) {
    linesColor = a;
    update();
  }
  int getlinesType() { return linesType; }
  void setlinesType(int a) {
    linesType = a;
    update();
  }
  float getlineWidth() { return verticesWidth; }
  void setlineWidth(float a) {
    verticesWidth = a;
    update();
  }
  float getverticesWidth() { return verticesWidth; }
  void setverticesWidth(float a) {
    verticesWidth = a;
    update();
  }
  glview(QWidget *parent = nullptr);
  virtual ~glview() {}
  void setArray(QString path);
  int exist;
  std::size_t getV_count() { return myArray.getVertices_arr().size() / 3; }
  std::size_t getI_count() { return myArray.getI_count(); }

 protected:
  //    Controller *controller;
  ObjParser myArray;
  Facade arrayToChange;
  std::vector<double> myVerticesVectorArray;
  std::vector<double> myCopyVerticesVectorArray;
  std::vector<int> myIndecesVectorArray;
  QColor backgroundColor;
  QColor linesColor;
  QColor verticesColor;
  void initializeGL() override;
  void paintGL() override;
  void resizeGL(int w, int h) override;
  int verticeTypes;
  int linesType;
  float verticesWidth;
  float lineWidth;
  size_t indecSize = 0;
 public slots:
  void onBackColorChange(const QColor &color);
  void onLinesColorChange(const QColor &color);
  void onVerticesColorChange(const QColor &color);
  void onVerticesTypeChange(const int &type);
  void onLinesTypeChange(const int &type);
  void onLinesWidthChange(const float &type);
  void onVerticesWidthChange(const float &type);
  void newArraysAdded();
  void ArrayChanged(const double &angle, Mode key);
  void onExecuteButtonClicked();
  void onCheckboxChange(Mode key);
  void onRemoveCheckboxState(Mode key);
};

}  // namespace s21

#endif  // GLVIEW_H
