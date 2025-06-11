#include "parser.h"

namespace s21 {

Status ObjParser::parse_obj_file(const char* filename) {
  std::ifstream file(filename);
  Status key;
  if (!file.is_open()) {
    return ErrFileMiss;
  } else {
    key = parse_vertices_and_indices(file);
    get_extremes();
    normalization_xyz();
  }
  return key;
}

void ObjParser::recreate() {
  _indeces.clear();
  _indeces_pare.clear();
  _verteces.clear();
  _indeces.clear();
  _verteces_obr.clear();
  edges_.clear();
  min_x = 0, max_x = 0, min_y = 0, max_y = 0, min_z = 0, max_z = 0;
}

Status ObjParser::parse_vertices_and_indices(std::ifstream& file) {
  std::string line;
  std::string prefix;
  std::string value;
  while (std::getline(file, line)) {
    std::istringstream iss(line);
    iss >> prefix;
    if (prefix == "v") {
      // verteces_count++;
      while (iss >> value) {
        _verteces.push_back(std::stod(value));
      }
      // edges_.push_back(verteces_count);
    } else if (prefix == "f") {
      indices_count++;
      _indeces.clear();
      while (iss >> value) {
        if (value.find("/") != std::string::npos) {
          _indeces.push_back(std::stoi(value.substr(0, value.find("/"))) - 1);
        } else
          _indeces.push_back(std::stoi(value) - 1);
      }
      for (std::size_t i = 0; i < _indeces.size(); ++i) {
        _indeces_pare.push_back(_indeces[i]);
        _indeces_pare.push_back(_indeces[(i + 1) % _indeces.size()]);
      }
    }
  }
  return Ok;
}

void ObjParser::get_extremes() {
  double x, y, z;
  max_x = min_x = _verteces[0];
  max_y = min_y = _verteces[1];
  max_z = min_z = _verteces[2];

  for (std::size_t i = 3; i < _verteces.size(); i += 3) {
    x = _verteces[i];
    y = _verteces[i + 1];
    z = _verteces[i + 2];

    if (x > max_x) max_x = x;
    if (y > max_y) max_y = y;
    if (z > max_z) max_z = z;

    if (x < min_x) min_x = x;
    if (y < min_y) min_y = y;
    if (z < min_z) min_z = z;
  }
}

void ObjParser::normalization_xyz() {
  double x, y, z;
  for (size_t i = 0; i < _verteces.size(); i += 3) {
    x = _verteces[i];
    y = _verteces[i + 1];
    z = _verteces[i + 2];

    _verteces_obr.push_back(((x - min_x) * 2 / (max_x - min_x)) - 1);
    _verteces_obr.push_back(((y - min_y) * 2 / (max_y - min_y)) - 1);
    _verteces_obr.push_back(((z - min_z) * 2 / (max_z - min_z)) - 1);
  }
}

// void ObjParser::print_obj() {for (std::size_t i = 0; i < _verteces.size();
// ++i) {
//         if (i % 3 == 0) std::cout << "\n";
//         std::cout << _verteces[i] << " ";
//     }
//     // std::cout << "\n";
//     // for (std::size_t i = 0; i < _verteces_obr.size(); ++i) {
//     //     if (i % 3 == 0) std::cout << "\n";
//     //     std::cout << _verteces_obr[i] << " ";
//     // }
//     std::cout << "\n";
//     for (std::size_t i = 0; i < _indeces.size(); ++i) {
//         if (i % 3 == 0) std::cout << "\n";
//         std::cout << _indeces[i] << " ";
//     }
//     std::cout << "\n";
//     for (std::size_t i = 0; i < _indeces_pare.size(); ++i) {
//         if (i % 6 == 0) std::cout << "\n";
//         std::cout << _indeces_pare[i] << " ";
//     }
//     std::cout << "\n";
// }

}  // namespace s21
