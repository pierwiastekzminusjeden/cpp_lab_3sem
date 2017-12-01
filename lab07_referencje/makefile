CXX=g++
CXXFLAGS=-g -Wall
CXXFLAGS+=-pedantic
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
OUTPUT=stest
all: $(OUTPUT)

$(OUTPUT): $(OBJ)
		$(CXX) $? -o $@

$(OBJ): $(SRC)
		$(CXX) $(CXXFLAGS) -c $*.cpp -o $@

.PHONY: clean run copy back val

clean:
	rm -f $(OUTPUT) $(OBJ)

run: $(OUTPUT)
	./$(OUTPUT)

copy:
	if [ -d "./copy" ]; then rm -r copy; fi
	mkdir copy
	cp $(SRC) copy
	cp *.h copy

back:
	rm -r copy

val:
	valgrind ./$(OUTPUT)

