#ifndef CPP4_3DVIEWER_V2_FACADE_H_
#define CPP4_3DVIEWER_V2_FACADE_H_

#include "affine.h"
#include "parser.h"

namespace s21 {

class Facade {
 public:
  virtual ~Facade() = default;
  void operation(const char *filename);
  void operation(std::vector<double> &vertex, const double k, Mode key);
  void operation(const double k);
  void setCommand(Mode key);
  void execute(std::vector<double> &vertex, const double k);
  void removeCommand(Mode key);
  std::vector<double> getVertex();
  void updateVertex(std::vector<double> &vertex);
  // void operation(const double k, Mode key);
 private:
  ObjParser parser;
  Affine affine;
  std::vector<double> _vertex;
};

}  // namespace s21

#endif  // CPP4_3DVIEWER_V2_FACADE_H_