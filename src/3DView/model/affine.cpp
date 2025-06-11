#include "affine.h"

using namespace s21;

void MoveX::TransformModel(std::vector<double> &vertex, const double k) {
  for (size_t i = 0; i < vertex.size(); i += 3) vertex[i] += k;
}

void MoveY::TransformModel(std::vector<double> &vertex, const double k) {
  for (size_t i = 1; i < vertex.size(); i += 3) vertex[i] += k;
}

void MoveZ::TransformModel(std::vector<double> &vertex, const double k) {
  for (size_t i = 2; i < vertex.size(); i += 3) vertex[i] += k;
}

void RotateX::TransformModel(std::vector<double> &vertex, double angle) {
  double y, z;
  angle = angle * M_PI / 180;
  for (size_t i = 0; i < vertex.size(); i += 3) {
    y = vertex[i + 1];
    z = vertex[i + 2];
    vertex[i + 1] = y * cos(angle) + z * sin(angle);
    vertex[i + 2] = -y * sin(angle) + z * cos(angle);
  }
}

void RotateY::TransformModel(std::vector<double> &vertex, double angle) {
  double x, z;
  angle = angle * M_PI / 180;
  for (size_t i = 0; i < vertex.size(); i += 3) {
    x = vertex[i];
    z = vertex[i + 2];
    vertex[i] = x * cos(angle) + z * sin(angle);
    vertex[i + 2] = -x * sin(angle) + z * cos(angle);
  }
}

void RotateZ::TransformModel(std::vector<double> &vertex, double angle) {
  double x, y;
  angle = angle * M_PI / 180;
  for (size_t i = 0; i < vertex.size(); i += 3) {
    x = vertex[i];
    y = vertex[i + 1];
    vertex[i] = x * cos(angle) + y * sin(angle);
    vertex[i + 1] = -x * sin(angle) + y * cos(angle);
  }
}

void Scale::TransformModel(std::vector<double> &vertex, const double k) {
  if (k != 0) {
    for (size_t i = 0; i < vertex.size(); i++) vertex[i] *= k;
  }
}

void Affine::TransformModel(std::vector<double> &vertex, const double k,
                            Mode key) {
  switch (key) {
    case kMoveX:
      SetStrategy(std::make_unique<MoveX>());
      break;
    case kMoveY:
      SetStrategy(std::make_unique<MoveY>());
      break;
    case kMoveZ:
      SetStrategy(std::make_unique<MoveZ>());
      break;
    case kRotateX:
      SetStrategy(std::make_unique<RotateX>());
      break;
    case kRotateY:
      SetStrategy(std::make_unique<RotateY>());
      break;
    case kRotateZ:
      SetStrategy(std::make_unique<RotateZ>());
      break;
    case kScale:
      SetStrategy(std::make_unique<Scale>());
      break;
    default:
      std::cout << "Unknown transformation key!" << std::endl;
      return;
  }
  strategy_->TransformModel(vertex, k);
}

void Affine::TransformModel(std::vector<double> &vertex, const double k) {
  if (strategy_) {
    strategy_->TransformModel(vertex, k);
  } else {
    std::cout << "No strategy set!" << std::endl;
  }
}

void Affine::SetStrategy(std::unique_ptr<TransformStrategy> strategy) {
  strategy_ = std::move(strategy);
}

void Affine::AddCommand(Mode key) {
  std::unique_ptr<Command> command;
  switch (key) {
    case kRotateX:
      command = std::make_unique<RotateX>();
      break;
    case kRotateY:
      command = std::make_unique<RotateY>();
      break;
    case kRotateZ:
      command = std::make_unique<RotateZ>();
      break;
    default:
      std::cout << "Unknown command!" << std::endl;
      return;
  }

  invoker.AddCommand(std::move(command));
}

void Affine::ExecuteCommands(std::vector<double> &vertex, double k) {
  invoker.ExecuteCommands(vertex, k);
}

void Affine::RemoveCommand(Mode key) {
  if (key == kRotateX)
    invoker.RemoveCommand<RotateX>();
  else if (key == kRotateY)
    invoker.RemoveCommand<RotateY>();
  else if (key == kRotateZ)
    invoker.RemoveCommand<RotateZ>();
}
