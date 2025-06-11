#ifndef CPP4_3DVIEWER_V2_SRC_FILE_PARSER_H_
#define CPP4_3DVIEWER_V2_SRC_FILE_PARSER_H_

#include <fstream>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

namespace s21 {
enum Status { Ok, ErrFileMiss, ErrIncorrect, ErrEmpty };

class ObjParser {
 public:
  ObjParser(){};
  Status parse_obj_file(const char* filename);
  void print_obj();
  void recreate();
  std::size_t getI_count() { return indices_count; }
  std::vector<double> getVertices_arr() { return _verteces_obr; }
  std::vector<int> getIndeces_arr() { return _indeces_pare; }
  std::vector<unsigned> getEdges_arr() { return edges_; }

 private:
  Status parse_vertices_and_indices(std::ifstream& file);
  void get_extremes();
  void normalization_xyz();

  std::vector<double> _verteces;
  std::vector<double> _verteces_obr;  // с формулами

  std::vector<int> _indeces;
  std::vector<int> _indeces_pare;

  std::vector<unsigned> edges_;

  double min_x, max_x, min_y, max_y, min_z, max_z;
  int indices_count = 0;
};
}  // namespace s21

#endif  // CPP4_3DVIEWER_V2_SRC_FILE_PARSER_H_
