#include <gtest/gtest.h>
#include "../model/facade.h"

namespace s21 {

class AffineTest : public ::testing::Test {
 protected:
  void SetUp() override {
    vertices = {1.0, 2.0, 3.0};  // Задаем тестовые вершины
  }
  Facade changeArray;
  std::vector<double> vertices;
};

TEST_F(AffineTest, MoveXTest) {
  changeArray.operation(vertices, 2, kMoveX);

  // Проверяем, что вершинa сместились на 2 по X
  EXPECT_DOUBLE_EQ(vertices[0], 3.0);
  EXPECT_DOUBLE_EQ(vertices[0], 3.0);
}

TEST_F(AffineTest, MoveYTest) {
  changeArray.operation(vertices, 1.5, kMoveY);

  // Проверяем, что вершина сместились на 1.5 по Y
  EXPECT_DOUBLE_EQ(vertices[1], 3.5);
}

TEST_F(AffineTest, MoveZTest) {
  changeArray.operation(vertices, -1.0, kMoveZ);

  // Проверяем, что вершина сместились на -1 по Z
  EXPECT_DOUBLE_EQ(vertices[2], 2.0);
}

TEST_F(AffineTest, RotateXTest) {
  changeArray.operation(vertices, M_PI / 2, kRotateX);  // Вращаем на 90 градусов вокруг X

  // Проверяем преобразования координат
  EXPECT_NEAR(vertices[1], 2.081484834495096248, 1e-9);
  EXPECT_NEAR(vertices[2], 2.9440483833943563, 1e-9);
}

TEST_F(AffineTest, RotateYTest) {
  changeArray.operation(vertices, M_PI / 2, kRotateY);  // Вращаем на 90 градусов вокруг Y

  // Проверяем преобразования координат
  EXPECT_NEAR(vertices[0], 1.0818606176356145, 1e-9);
  EXPECT_NEAR(vertices[2], 2.9714605169864008, 1e-9);
}

TEST_F(AffineTest, RotateZTest) {
  changeArray.operation(vertices, M_PI / 2, kRotateZ);  // Вращаем на 90 градусов вокруг Y

  // Проверяем преобразования координат
  EXPECT_NEAR(vertices[0], 1.0544484840435702, 1e-9);
  EXPECT_NEAR(vertices[1], 1.971836300126919, 1e-9);
}
TEST_F(AffineTest, ScaleTest) {
  changeArray.operation(vertices, 2.0, kScale);

  // Проверяем, что вершины масштабировались в два раза
  EXPECT_DOUBLE_EQ(vertices[0], 2.0);
  EXPECT_DOUBLE_EQ(vertices[1], 4.0);
  EXPECT_DOUBLE_EQ(vertices[2], 6.0);
}


TEST_F(AffineTest, PatternTest) {
  changeArray.setCommand(kRotateX);
  changeArray.execute(vertices, M_PI / 2);
  EXPECT_NEAR(vertices[0], 1.0, 1e-9);
  EXPECT_NEAR(vertices[1], 2.081484834495096248, 1e-9);
  EXPECT_NEAR(vertices[2], 2.9440483833943563, 1e-9);
}

TEST_F(AffineTest, PatternTest2) {
  changeArray.setCommand(kRotateY);
  changeArray.execute(vertices, M_PI / 2);
  EXPECT_NEAR(vertices[0], 1.0818606176356145, 1e-9);
  EXPECT_NEAR(vertices[1], 2, 1e-9);
  EXPECT_NEAR(vertices[2], 2.9714605169864008, 1e-9);
}
TEST_F(AffineTest, PatternTest3) {
  changeArray.setCommand(kRotateZ);
  changeArray.execute(vertices, M_PI / 2);
  EXPECT_NEAR(vertices[0], 1.0544484840435702, 1e-9);
  EXPECT_NEAR(vertices[1], 1.971836300126919, 1e-9);
  EXPECT_NEAR(vertices[2], 3, 1e-9);
}
TEST_F(AffineTest, PatternTest4) {
  changeArray.setCommand(kRotateX);
  changeArray.removeCommand(kRotateX);
  changeArray.setCommand(kRotateY);
  changeArray.removeCommand(kRotateY);
  changeArray.setCommand(kRotateZ);
  changeArray.removeCommand(kRotateZ); // проверяем что удалили
  changeArray.execute(vertices, M_PI / 2);
  EXPECT_NEAR(vertices[0], 1, 1e-9);
  EXPECT_NEAR(vertices[1], 2, 1e-9);
  EXPECT_NEAR(vertices[2], 3, 1e-9);
}
class ObjParserTest : public ::testing::Test {
 protected:
  void SetUp() override {
    parser = new ObjParser();
    vertices_arr = new double[24]{
      -1.000000, -1.000000, -1.000000, 
      -1.000000, -1.000000, 1.000000, 
      -1.000000, 1.000000, -1.000000, 
      -1.000000, 1.000000, 1.000000, 
      1.000000, -1.000000, -1.000000, 
      1.000000, -1.000000, 1.000000, 
      1.000000, 1.000000, -1.000000, 
      1.000000, 1.000000, 1.000000
    };
  }

  void TearDown() override {
    delete parser;
    delete[] vertices_arr;
  }

  ObjParser* parser;
  double *vertices_arr;
};
TEST_F(ObjParserTest, ParsTest) {
  ObjParser test;
  test.parse_obj_file("obj_file/cube.obj");
  for (int i = 0; i < test.getVertices_arr().size() / 3; i++){
    EXPECT_DOUBLE_EQ(vertices_arr[i], test.getVertices_arr().data()[i]);
  }
  EXPECT_EQ(test.getI_count(), 10);
  EXPECT_EQ(test.getVertices_arr().size() / 3, 8);
}
}  // namespace s21
