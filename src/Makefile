CC = g++
DOXYFILE := Doxyfile
GCOV = -fprofile-arcs -ftest-coverage -lgtest -lgtest_main -pthread 
OS = $(shell uname)
QMAKE = /usr/lib/qt6/bin/qmake
INSTALL_DIR ?= 3DViewer
ifeq ($(OS), Linux)
  BUILD_DIR = build/Desktop_Qt_6_6_3_MinGW_64_bit-Debug
  APP_DIR=
  LIBS = -lcheck -lm -lpthread -lsubunit -lrt
  OPEN = xdg-open
else
  BUILD_DIR = build/Desktop_Qt_6_6_3_MinGW_64_bit-Debug
  APP_DIR= 3D_Viewer_v2.app/Contents/MacOS
  LIBS = -lcheck
  OPEN = open
endif

all: clean build

build:
	$(QMAKE) -o $(BUILD_DIR)/Makefile ./3DView/3DViewer_v2.pro
	make -C $(BUILD_DIR)/


rebuild: clean all

# если хочется вызывать как make install INSTALL_DIR = dir
install: rebuild
	rm -rf $(INSTALL_DIR)
	mkdir $(INSTALL_DIR)
	install $(BUILD_DIR)$(APP_DIR)/3DViewer_v2 $(INSTALL_DIR)/3DViewer_v2
	./$(INSTALL_DIR)/3DViewer_v2
uninstall:
	rm -rf $(INSTALL_DIR)

dvi: $(DOXYFILE)
	@doxygen $(DOXYFILE)

dist:
	tar -cf 3D_Viewer_v2.tar Readme.md 3DView Makefile 

tests: 3d_viewer.a
	cd 3DView && g++ $(LIBS) -pthread tests/test.cpp 3d_viewer.a -fprofile-arcs -ftest-coverage -coverage -lgtest -lgtest_main -lsubunit -lrt -o test && ./test
gcov_report: tests
	cd 3DView && lcov --capture --directory . --output-file gcov_report.info \
 	&&  lcov --remove gcov_report.info "/usr/include/*" "*/gtest/*" "*/bits/*" "*/ext/*" "*/facade*" -o gcov_report_filtered.info && \
	genhtml gcov_report_filtered.info --output-directory coverage_report && $(OPEN) coverage_report/index.html

3d_viewer.a: 
	cd 3DView && $(CC) $(GCOV) -fprofile-arcs -ftest-coverage -c model/parser.cpp model/facade.cpp model/affine.cpp && \
	ar rcs 3d_viewer.a parser.o affine.o facade.o

clang:
	clang-format --style=Google -i 3DView/*.cpp 3DView/model/*.cpp 3DView/*.h 3DView/model/*.h 3DView/view/*.cpp 3DView/view/*.h
clean:
	rm -rf ./report $(INSTALL_DIR) *.o *.a *.gc* *.out 3DView/*.o 3DView/*.a 3DView/*.gc* 3DView/*.info 3DView/test
	rm -rf 3DView/$(BUILD_DIR)/debug/*.o test *.swp 3DView/coverage_report
	rm -rf *.info  *.tar 3DView/$(BUILD_DIR)/debug/*.exe build
