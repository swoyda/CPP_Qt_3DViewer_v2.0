#include "glview.h"

#include <QDebug>
using namespace s21;

glview::glview(QWidget *parent) : QOpenGLWidget(parent) { exist = 0; }
void glview::paintGL() {
  if (exist) {
    glClearColor(backgroundColor.redF(), backgroundColor.greenF(),
                 backgroundColor.blueF(), 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glVertexPointer(3, GL_DOUBLE, 0, myVerticesVectorArray.data());
    glEnableClientState(GL_VERTEX_ARRAY);
    if (verticeTypes) {
      glColor3f(verticesColor.redF(), verticesColor.greenF(),
                verticesColor.blueF());
      if (verticeTypes == circle)
        glEnable(GL_POINT_SMOOTH);
      else
        glDisable(GL_POINT_SMOOTH);
      glPointSize(verticesWidth);
      glDrawElements(GL_POINTS, myIndecesVectorArray.size(), GL_UNSIGNED_INT,
                     myIndecesVectorArray.data());
    }

    glColor3f(linesColor.redF(), linesColor.greenF(), linesColor.blueF());
    if (linesType) {
      glDisable(GL_LINE_STIPPLE);
    } else {
      glEnable(GL_LINE_STIPPLE);
    }
    glLineWidth(lineWidth);
    glLineStipple(1, 0x00F0);
    glDrawElements(GL_LINES, myIndecesVectorArray.size(), GL_UNSIGNED_INT,
                   myIndecesVectorArray.data());

    glDisableClientState(GL_VERTEX_ARRAY);
  }
}
void glview::initializeGL() {
  float a = 1.0f;
  glClearColor(backgroundColor.redF(), backgroundColor.greenF(),
               backgroundColor.blueF(), a);
  glEnable(GL_DEPTH_TEST);
  glEnable(GL_LIGHT0);
  glEnable(GL_LIGHTING);
  glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
  glEnable(GL_COLOR_MATERIAL);
  glClear(GL_COLOR_BUFFER_BIT);
}

void glview::resizeGL(int w, int h) { glViewport(0, 0, w, h); }
void glview::setArray(QString path) {
  if (exist) {
    myArray.recreate();
  }
  myArray.parse_obj_file(path.toStdString().c_str());
  myVerticesVectorArray = myArray.getVertices_arr();
  myCopyVerticesVectorArray = myVerticesVectorArray;
  myIndecesVectorArray = myArray.getIndeces_arr();
  indecSize = (int)myIndecesVectorArray.size() / 3;
  exist = 1;
  paintGL();
}

void glview::onLinesColorChange(const QColor &color) {
  linesColor = color;
  update();
}
void glview::onBackColorChange(const QColor &color) {
  backgroundColor = color;
  update();
}
void glview::onVerticesColorChange(const QColor &color) {
  verticesColor = color;
  update();
}
void glview::onVerticesTypeChange(const int &type) {
  verticeTypes = type;
  update();
}
void glview::onLinesTypeChange(const int &type) {
  linesType = type;
  update();
}
void glview::onLinesWidthChange(const float &type) {
  lineWidth = type;
  update();
}
void glview::onVerticesWidthChange(const float &type) {
  verticesWidth = type;
  update();
}

void glview::ArrayChanged(const double &angle, Mode key) {
  if (exist) {
    if (key == kScale) {
      myVerticesVectorArray = myCopyVerticesVectorArray;
      arrayToChange.operation(myVerticesVectorArray, angle, key);
    } else {
      arrayToChange.operation(myVerticesVectorArray, angle, key);
      arrayToChange.operation(myCopyVerticesVectorArray, angle, key);
    }
    update();
  }
}

void glview::onCheckboxChange(Mode key) { arrayToChange.setCommand(key); }
void glview::onExecuteButtonClicked() {
  arrayToChange.execute(myVerticesVectorArray, 90);
  arrayToChange.execute(myCopyVerticesVectorArray, 90);
  update();
}

void glview::onRemoveCheckboxState(Mode key) {
  arrayToChange.removeCommand(key);
}
