CFLAGS = -Wall -Werror
OBJ = g++ $(CFLAGS) -c $< -o $@
TOBJT = g++ $(CFLAGS) -I check/catch2 -c $< -o $@

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


bin/turing-test: build/test/test.o build/test/test-printstring.o
	g++ $(CFLAGS)  $^ -o $@

build/test/test.o: test/test.cpp test/Turing-test-head.h
	$(TOBJT)

build/test/test-printstring.o: test/test-printstring.cpp test/Turing-test-head.h
	$(TOBJT)

clean:
	rm build/*.o
	rm bin/*.exe
	rm -R -f build
	rm -R -f bin
