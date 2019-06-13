CFLAGS = -Wall -Werror
TEST = g++ -std=c++11 $(GFAGS) -Ithirtdparty/catch2 -Isrc -c $< -o $@
OBJ = g++ $(CFLAGS) -c $< -o $@

.PHONY: clean

all:folder bin/Game.exe bin/tests

folder:
	mkdir -p build 
	mkdir -p bin

bin/Game.exe : build/check.o build/conclusion.o build/main.o 
	g++ $(CFLAGS) $^ -o $@

build/main.o: src/main.cpp src/main.h 
	$(OBJ)

build/check.o : src/check.cpp src/main.h 
	$(OBJ)

build/conclusion.o : src/conclusion.cpp src/main.h 
	$(OBJ)

bin/tests: build/test.o build/check.o
	g++ $(CFLAGS) -Ithirdparty/catch2 $^ -o $@

build/test.o: test/test.cpp src/check.cpp 
	$(TEST)


clean:
	rm build/*.o
	rm bin/*.exe
	rm bin/tests
	rm -R build
	rm -R bin