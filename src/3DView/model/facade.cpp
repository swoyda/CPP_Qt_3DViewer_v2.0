#include "facade.h"

namespace s21 {

void Facade::operation(const char *filename) {
  parser.parse_obj_file(filename);
  _vertex = parser.getVertices_arr();
}

void Facade::operation(std::vector<double> &vertex, const double k, Mode key) {
  affine.TransformModel(vertex, k, key);
}

void Facade::operation(const double k) { affine.TransformModel(_vertex, k); }

std::vector<double> Facade::getVertex() { return parser.getVertices_arr(); }

void Facade::updateVertex(std::vector<double> &vertex) {
  this->_vertex = vertex;
}

void Facade::setCommand(Mode key) { affine.AddCommand(key); }

void Facade::execute(std::vector<double> &vertex, const double k) {
  affine.ExecuteCommands(vertex, k);
}

void Facade::removeCommand(Mode key) { affine.RemoveCommand(key); }

}  // namespace s21
