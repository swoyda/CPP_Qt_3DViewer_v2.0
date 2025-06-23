#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  myGlSettings = new QSettings("S21", "3DViewer", this);
  loadSettings();

  configureSlider(ui->scaleSlider, 1, 200);

  configureSlider(ui->linesThiknessSlider, 1, 10);

  configureSlider(ui->verticesThiknessSlider, 1, 20);

  configureSpinBox(ui->moveXDoubleSpinBox, -100, 100, 0.01);
  configureSpinBox(ui->moveYDoubleSpinBox, -100, 100, 0.01);
  configureSpinBox(ui->moveZDoubleSpinBox, -100, 100, 0.01);

  create_menu();
  connect_buttons_signals();
}

MainWindow::~MainWindow() {
  saveSettings();
  delete ui;
}

void MainWindow::create_menu() {
  connect(ui->actionSet_background_color, SIGNAL(triggered()), this,
          SLOT(actionSet_background_color_triggered()));
  connect(ui->actioncolor, SIGNAL(triggered()), this,
          SLOT(actionSet_color_lines_triggered()));
  connect(ui->actionSet_color, SIGNAL(triggered()), this,
          SLOT(actionSet_color_vertices_triggered()));

  connect(ui->actionsolid, SIGNAL(triggered()), this,
          SLOT(actionSet_Solid_triggered()));
  connect(ui->actiondashed, SIGNAL(triggered()), this,
          SLOT(actionSet_Dashed_triggered()));

  connect(ui->actionNone, SIGNAL(triggered()), this,
          SLOT(action_None_triggered()));
  connect(ui->actionCircle, SIGNAL(triggered()), this,
          SLOT(actionCircle_triggered()));
  connect(ui->actionSquare, SIGNAL(triggered()), this,
          SLOT(actionSquere_triggered()));

  connect(ui->action_bpm, SIGNAL(triggered()), this,
          SLOT(action_bmp_triggered()));
  connect(ui->action_jpg, SIGNAL(triggered()), this,
          SLOT(action_jpg_triggered()));
}

void MainWindow::connect_buttons_signals() {
  connect(ui->fileInputButton, SIGNAL(clicked()), this, SLOT(open_file()));

  connect(this, &MainWindow::backColorChanged, ui->myglwidget,
          &glview::onBackColorChange);
  connect(this, &MainWindow::linesColorChanged, ui->myglwidget,
          &glview::onLinesColorChange);

  connect(this, &MainWindow::verticesColorChanged, ui->myglwidget,
          &glview::onVerticesColorChange);
  connect(this, &MainWindow::verticeTypeChanged, ui->myglwidget,
          &glview::onVerticesTypeChange);

  connect(ui->rotateXcheckBox, SIGNAL(pressed()), this,
          SLOT(onXCheckBoxChanged()));
  connect(ui->rotateYcheckBox, SIGNAL(pressed()), this,
          SLOT(onYCheckBoxChanged()));
  connect(ui->rotateZcheckBox, SIGNAL(pressed()), this,
          SLOT(onZCheckBoxChanged()));

  connect(this, &MainWindow::linesTypeChanged, ui->myglwidget,
          &glview::onLinesTypeChange);
  connect(this, &MainWindow::checkboxChanged, ui->myglwidget,
          &glview::onCheckboxChange);
  connect(this, &MainWindow::removeCheckboxState, ui->myglwidget,
          &glview::onRemoveCheckboxState);
  connect(this, &MainWindow::linesWidthChanged, ui->myglwidget,
          &glview::onLinesWidthChange);

  connect(this, &MainWindow::verticesWidthChanged, ui->myglwidget,
          &glview::onVerticesWidthChange);

  connect(this, &MainWindow::arrayChanged, ui->myglwidget,
          &glview::ArrayChanged);

  connect(ui->linesThiknessSlider, &QSlider::valueChanged, this,
          &MainWindow::onSliderLinesValueChanged);
  connect(ui->linesThiknessLessButton, &QPushButton::clicked, this,
          &MainWindow::onDecreaseLinesButtonClicked);
  connect(ui->linesThiknessMoreButton, &QPushButton::clicked, this,
          &MainWindow::onIncreaseLinesButtonClicked);

  connect(ui->verticesThiknessSlider, &QSlider::valueChanged, this,
          &MainWindow::onSliderVerticesValueChanged);
  connect(ui->verticesThiknessLessButton, &QPushButton::clicked, this,
          &MainWindow::onDecreaseVerticesButtonClicked);
  connect(ui->verticesThiknessMoreButton, &QPushButton::clicked, this,
          &MainWindow::onIncreaseVerticesButtonClicked);

  connect(ui->screenshotButton, &QPushButton::clicked, this,
          &MainWindow::onScrinshotButtonClicked);
  connect(ui->gifButton, &QPushButton::clicked, this,
          &MainWindow::onGIFButtonClicked);
  connect(ui->executeButton, &QPushButton::clicked, ui->myglwidget,
          &glview::onExecuteButtonClicked);

  connect(ui->scaleSlider, &QSlider::valueChanged, this,
          &MainWindow::onScaleSliderValueChanged);
  connect(ui->scaleToLessButton, &QPushButton::clicked, this,
          &MainWindow::onDecreaseScaleButtonClicked);
  connect(ui->scaleToMoreButton, &QPushButton::clicked, this,
          &MainWindow::onIncreaseScaleButtonClicked);

  connect(ui->moveXDoubleSpinBox,
          static_cast<void (QDoubleSpinBox::*)(double)>(
              &QDoubleSpinBox::valueChanged),
          this, &MainWindow::onMoveXDoubleSpinBoxChanged);
  connect(ui->moveYDoubleSpinBox,
          static_cast<void (QDoubleSpinBox::*)(double)>(
              &QDoubleSpinBox::valueChanged),
          this, &MainWindow::onMoveYDoubleSpinBoxChanged);
  connect(ui->moveZDoubleSpinBox,
          static_cast<void (QDoubleSpinBox::*)(double)>(
              &QDoubleSpinBox::valueChanged),
          this, &MainWindow::onMoveZDoubleSpinBoxChanged);

  connect(ui->spinXdoubleSpinBox,
          static_cast<void (QDoubleSpinBox::*)(double)>(
              &QDoubleSpinBox::valueChanged),
          this, &MainWindow::onSpinXDoubleSpinBoxChanged);
  connect(ui->spinYdoubleSpinBox,
          static_cast<void (QDoubleSpinBox::*)(double)>(
              &QDoubleSpinBox::valueChanged),
          this, &MainWindow::onSpinYDoubleSpinBoxChanged);
  connect(ui->spinZdoubleSpinBox,
          static_cast<void (QDoubleSpinBox::*)(double)>(
              &QDoubleSpinBox::valueChanged),
          this, &MainWindow::onSpinZDoubleSpinBoxChanged);
}
void MainWindow::onScaleSliderValueChanged(int value) {
  double scale = (double)value / 100;
  emit arrayChanged(scale, kScale);
}
void MainWindow::onSpinXDoubleSpinBoxChanged(double value) {
  emit arrayChanged(value, kRotateX);
}
void MainWindow::onSpinYDoubleSpinBoxChanged(double value) {
  emit arrayChanged(value, kRotateY);
}
void MainWindow::onSpinZDoubleSpinBoxChanged(double value) {
  emit arrayChanged(value, kRotateZ);
}
void MainWindow::onMoveXDoubleSpinBoxChanged(double value) {
  emit arrayChanged(value, kMoveX);
}
void MainWindow::onMoveYDoubleSpinBoxChanged(double value) {
  emit arrayChanged(value, kMoveY);
}
void MainWindow::onMoveZDoubleSpinBoxChanged(double value) {
  emit arrayChanged(value, kMoveZ);
}
void MainWindow::saveSettings() {
  myGlSettings->setValue("backgroundcolor",
                         ui->myglwidget->getbackgroundColor());
  myGlSettings->setValue("verticescolor", ui->myglwidget->getverticesColor());
  myGlSettings->setValue("verticetype", ui->myglwidget->getverticesType());
  myGlSettings->setValue("linescolor", ui->myglwidget->getlinesColor());
  myGlSettings->setValue("linestype", ui->myglwidget->getlinesType());
  myGlSettings->setValue("linewidth", ui->myglwidget->getlineWidth());
  myGlSettings->setValue("verticeswidth", ui->myglwidget->getverticesWidth());
}

void MainWindow::configureSlider(QSlider* s, int min, int max) {
    s->setMinimum(min);
    s->setMaximum(max);
}

void MainWindow::configureSpinBox(QDoubleSpinBox* sb, double min, double max, double step) {
    sb->setMinimum(min);
    sb->setMaximum(max);
    sb->setSingleStep(step);
}
void MainWindow::loadSettings() {
  QVariant backgoundSettings =
      myGlSettings->value("backgroundcolor", QColor(Qt::black));
  ui->myglwidget->setbackgroundColor(backgoundSettings.value<QColor>());

  QVariant verticesColorSettings =
      myGlSettings->value("verticescolor", QColor(Qt::red));
  ui->myglwidget->setverticesColor(verticesColorSettings.value<QColor>());

  QVariant verticeTypeSettings = myGlSettings->value("verticetype", circle);
  ui->myglwidget->setverticesType(verticeTypeSettings.value<int>());

  QVariant linesColorSettings =
      myGlSettings->value("linescolor", QColor(Qt::green));
  ui->myglwidget->setlinesColor(linesColorSettings.value<QColor>());

  QVariant linesTypeSettings = myGlSettings->value("linestype", solid);
  ui->myglwidget->setlinesType(linesTypeSettings.value<int>());

  QVariant linesWidthSettings = myGlSettings->value("linewidth", 1.0);
  ui->myglwidget->setlineWidth(linesWidthSettings.value<float>());
  ui->linesThiknessSlider->setValue(ui->myglwidget->getlineWidth());

  QVariant verticesWidthSettings = myGlSettings->value("verticeswidth", 10.0);
  ui->myglwidget->setverticesWidth(verticesWidthSettings.value<float>());
  ui->verticesThiknessSlider->setValue(ui->myglwidget->getverticesWidth());

  ui->scaleSlider->setValue(100);
}
void MainWindow::onIncreaseScaleButtonClicked() {
  int sliderValue = ui->scaleSlider->value();
  sliderValue++;
  if (sliderValue > ui->scaleSlider->maximum()) {
    sliderValue = ui->scaleSlider->maximum();
  }
  ui->scaleSlider->setValue(sliderValue);
}

void MainWindow::onDecreaseScaleButtonClicked() {
  int sliderValue = ui->scaleSlider->value();
  sliderValue--;
  if (sliderValue < ui->scaleSlider->minimum()) {
    sliderValue = ui->scaleSlider->minimum();
  }
  ui->scaleSlider->setValue(sliderValue);
}
void MainWindow::onDecreaseVerticesButtonClicked() {
  int sliderValue = ui->verticesThiknessSlider->value();
  sliderValue--;
  if (sliderValue < ui->verticesThiknessSlider->minimum()) {
    sliderValue = ui->verticesThiknessSlider->minimum();
  }
  ui->verticesThiknessSlider->setValue(sliderValue);
}
void MainWindow::onIncreaseVerticesButtonClicked() {
  int sliderValue = ui->verticesThiknessSlider->value();

  sliderValue++;
  if (sliderValue > ui->verticesThiknessSlider->maximum()) {
    sliderValue = ui->verticesThiknessSlider->maximum();
  }
  ui->verticesThiknessSlider->setValue(sliderValue);
}
void MainWindow::onSliderVerticesValueChanged(int value) {
  float thikness = static_cast<float>(value);
  emit verticesWidthChanged(thikness);
}

void MainWindow::onDecreaseLinesButtonClicked() {
  int sliderValue = ui->linesThiknessSlider->value();

  sliderValue--;
  if (sliderValue < ui->linesThiknessSlider->minimum()) {
    sliderValue = ui->linesThiknessSlider->minimum();
  }
  ui->linesThiknessSlider->setValue(sliderValue);
}
void MainWindow::onIncreaseLinesButtonClicked() {
  int sliderValue = ui->linesThiknessSlider->value();

  sliderValue++;
  if (sliderValue > ui->linesThiknessSlider->maximum()) {
    sliderValue = ui->linesThiknessSlider->maximum();
  }
  ui->linesThiknessSlider->setValue(sliderValue);
}

void MainWindow::onSliderLinesValueChanged(int value) {
  float thikness = static_cast<float>(value);
  emit linesWidthChanged(thikness);
}

void MainWindow::actionSet_Solid_triggered() { emit linesTypeChanged(solid); }
void MainWindow::actionSet_Dashed_triggered() { emit linesTypeChanged(dashed); }
void MainWindow::actionSet_color_lines_triggered() {
  QColor linesC = QColorDialog::getColor(ui->myglwidget->getlinesColor(), this,
                                         "Choose Lines Color");
  if (linesC.isValid()) {
    emit linesColorChanged(linesC);
  }
}

void MainWindow::actionSet_background_color_triggered() {
  QColor backC = QColorDialog::getColor(ui->myglwidget->getbackgroundColor(),
                                        this, "Choose Background Color");
  if (backC.isValid()) {
    emit backColorChanged(backC);
  }
}
void MainWindow::actionSet_color_vertices_triggered() {
  QColor vertC = QColorDialog::getColor(ui->myglwidget->getverticesColor(),
                                        this, "Choose Vertices Color");
  if (vertC.isValid()) {
    emit verticesColorChanged(vertC);
  }
}
void MainWindow::action_None_triggered() { emit verticeTypeChanged(none); }
void MainWindow::actionCircle_triggered() { emit verticeTypeChanged(circle); }
void MainWindow::actionSquere_triggered() { emit verticeTypeChanged(square); }
void MainWindow::open_file() {
  QString fileName = QFileDialog::getOpenFileName(this, tr("Open object File"),
                                                  "", tr("OBJ Files (*.obj)"));
  if (!fileName.isEmpty()) {
    QFileInfo fileInfo(fileName);
    QString justFileName = fileInfo.fileName();
    ui->objnamelabel->setText(justFileName);
    QString QSPath = fileInfo.filePath();
    ui->myglwidget->setArray(QSPath);
    ui->indicesLabel->setText(QString::number(ui->myglwidget->getI_count()));
    ui->verticesLabel->setText(QString::number(ui->myglwidget->getV_count()));
  } else {
    QMessageBox::warning(this, "Error", "Не удалось прочитать файл");
  }
}
void MainWindow::onGIFButtonClicked() {
  myMedia.onGIFButtonClicked(ui->myglwidget);
}
void MainWindow::onScrinshotButtonClicked() {
  myMedia.make_scrinshot(ui->myglwidget);
}
void MainWindow::action_jpg_triggered() { myMedia.set_scrinshot_set(jpg); }
void MainWindow::action_bmp_triggered() { myMedia.set_scrinshot_set(bmp); }
void MainWindow::onXCheckBoxChanged() {
  if (flag) {
    flag = 0;
    emit removeCheckboxState(kRotateX);
  } else {
    flag = 1;
    emit checkboxChanged(kRotateX);
  }
}
void MainWindow::onYCheckBoxChanged() {
  if (flag) {
    flag = 0;
    emit removeCheckboxState(kRotateY);
  } else {
    flag = 1;
    emit checkboxChanged(kRotateY);
  }
}
void MainWindow::onZCheckBoxChanged() {
  if (flag) {
    flag = 0;
    emit removeCheckboxState(kRotateZ);
  } else {
    flag = 1;
    emit checkboxChanged(kRotateZ);
  }
}
