#ifndef CPP4_3DVIEWER_V2_SRC_TRANSFORM_H_
#define CPP4_3DVIEWER_V2_SRC_TRANSFORM_H_

#include <algorithm>
#include <cmath>
#include <mutex>
#include <thread>
#include <vector>

#include "parser.h"

namespace s21 {

enum Mode {
  kMoveX,
  kMoveY,
  kMoveZ,
  kRotateX,
  kRotateY,
  kRotateZ,
  kScale,
  kDefault
};

class MoveX;
class MoveY;
class MoveZ;
class RotateX;
class RotateY;
class RotateZ;
class Scale;

class TransformStrategy {
 public:
  virtual ~TransformStrategy() = default;
  virtual void TransformModel(std::vector<double> &vertex, double k) = 0;
};

class Command {
 public:
  virtual ~Command() = default;
  virtual void TransformModel(std::vector<double> &vertex, double k) = 0;
};

class Invoker {
 public:
  void AddCommand(std::unique_ptr<Command> command) {
    commands_.push_back(std::move(command));
  }

  void ExecuteCommands(std::vector<double> &vertex, double k) {
    for (const auto &command : commands_) {
      command->TransformModel(vertex, k);
    }
  }
  template <typename T>
  void RemoveCommand() {
    auto it = std::remove_if(commands_.begin(), commands_.end(),
                             [](const std::unique_ptr<Command> &command) {
                               return typeid(*command) == typeid(T);
                             });
    commands_.erase(it, commands_.end());
  }

 private:
  std::vector<std::unique_ptr<Command>> commands_;
};

class Affine {
 public:
  Affine() : strategy_(nullptr) {}
  void TransformModel(std::vector<double> &vertex, double k);
  void TransformModel(std::vector<double> &vertex, double k, Mode key);
  void SetStrategy(std::unique_ptr<TransformStrategy> strategy);

  void AddCommand(Mode key);
  void ExecuteCommands(std::vector<double> &vertex, double k);
  void RemoveCommand(Mode key);

 private:
  std::unique_ptr<TransformStrategy> strategy_;
  Invoker invoker;
};

class MoveX : public TransformStrategy {
 public:
  void TransformModel(std::vector<double> &vertex, const double k);
};

class MoveY : public TransformStrategy {
 public:
  void TransformModel(std::vector<double> &vertex, const double k);
};

class MoveZ : public TransformStrategy {
 public:
  void TransformModel(std::vector<double> &vertex, const double k);
};

class RotateX : public TransformStrategy, public Command {
 public:
  void TransformModel(std::vector<double> &vertex, double angle);
};

class RotateY : public TransformStrategy, public Command {
 public:
  void TransformModel(std::vector<double> &vertex, double angle);
};

class RotateZ : public TransformStrategy, public Command {
 public:
  void TransformModel(std::vector<double> &vertex, double angle);
};

class Scale : public TransformStrategy {
 public:
  void TransformModel(std::vector<double> &vertex, const double k);
};

}  // namespace s21

#endif  // CPP4_3DVIEWER_V2_SRC_TRANSFORM_H_
