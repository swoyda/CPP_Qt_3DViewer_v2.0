#include "record_media.h"

RecordMedia::RecordMedia() { scrinshot_settings = jpg; }
void RecordMedia::set_scrinshot_set(int set) { scrinshot_settings = set; }
void RecordMedia::onGIFButtonClicked(QWidget *widget) {
  myGifW = widget;
  gif = new QGifImage;
  gifTimer = new QTimer;
  connect(gifTimer, SIGNAL(timeout()), this, SLOT(recordGIF()));
  count_frames = 0;
  gifTimer->start(100);
}
void RecordMedia::recordGIF() {
  count_frames++;
  QList<QImage> frames;
  QPixmap pixmap = myGifW->grab();
  frames.append(pixmap.toImage());
  gif->setDefaultDelay(100);

  foreach (const QImage &frame, frames) {
    gif->addFrame(frame);
  }
  if (count_frames == 50) {
    gifTimer->stop();
    QString gifSavePath = NULL;
    gifSavePath =
        QFileDialog::getSaveFileName(myGifW, NULL, NULL, "GIF (*.gif)");
    if (!gifSavePath.isNull()) gif->save(gifSavePath);
  }
}

void RecordMedia::make_scrinshot(QWidget *widget) {
  QPixmap pixmap = widget->grab();

  QString imagePath = NULL;
  if (scrinshot_settings) {
    imagePath =
        QFileDialog::getSaveFileName(widget, NULL, NULL, "JPEG (*.jpg)");
    if (!imagePath.isNull()) pixmap.save(imagePath, "JPEG", 100);
  } else {
    imagePath = QFileDialog::getSaveFileName(widget, NULL, NULL, "BMP (*.bmp)");
    if (!imagePath.isNull()) pixmap.save(imagePath, "BMP", 100);
  }
}
