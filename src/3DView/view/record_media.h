#ifndef RECORD_MEDIA_H
#define RECORD_MEDIA_H

#include <QFileDialog>
#include <QTimer>
#include <QWidget>

#include "qgifimage.h"

typedef enum { bmp = 0, jpg } SettingsType;
class RecordMedia : public QWidget {
  Q_OBJECT
 public:
  RecordMedia();
  void record_gif();
  void set_scrinshot_set(int set);
  int get_scrinshot_set() { return scrinshot_settings; }

 private:
  QTimer *gifTimer;
  int scrinshot_settings;
  int count_frames;
  QGifImage *gif;
  QWidget *myGifW;
 public slots:
  void recordGIF();
  void onGIFButtonClicked(QWidget *widget);
  void make_scrinshot(QWidget *widget);
};

#endif  // RECORD_MEDIA_H
