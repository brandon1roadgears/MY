CFLAGS = -Wall -Werror
COMPILER = g++ -std=c++11
OBJ = $(COMPILER) $(CFLAGS) -c $< -o $@
TOBJT = $(COMPILER) $(CFLAGS) -I for_test_special/catch2 -c $< -o $@

.PHONY: clean

all: target1 target2 target3 target4 bin/turing-test

target1:
	mkdir -p build

target2:
	mkdir -p bin

target3:
	mkdir -p build/src

target4:
	mkdir -p build/test


bin/turing-test: build/test/test.o build/test/test-printstring.o build/test/test-move.o build/test/test-check_error.o
	$(COMPILER) $(CFLAGS)  $^ -o $@

build/test/test.o: test/test.cpp test/Turing-test-head.h
	$(TOBJT)

build/test/test-printstring.o: test/test-printstring.cpp test/Turing-test-head.h
	$(TOBJT)

build/test/test-move.o: test/test-move.cpp test/Turing-test-head.h
	$(TOBJT)

build/test/test-check_error.o: test/test-check_error.cpp test/Turing-test-head.h
	$(TOBJT)

clean:
	rm build/*.o
	rm -R -f build
	rm -R -f bin
