.PHONY: build run all clean format
build:
	cmake -G Ninja -S . -B build/ -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=Release
	cmake --build build/
run:
	./build/bin/Chess
all: build run
clean:
	rm -rf build/
format:
	clang-format -i src/*.cpp
	clang-format -i src/*.hpp
