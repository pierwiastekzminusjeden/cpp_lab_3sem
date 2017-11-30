CXX=clang++
CXXFLAGS=-g -Wall
CXXFLAGS+=-pedantic
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
OUTPUT=test
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

backup:
	if [ -d "./copy" ]; then rm -r copy; fi
	mkdir copy
	cp $(SRC) copy
	cp *.h copy

cB:
	rm -r copy

val:
	valgrind ./$(OUTPUT)
