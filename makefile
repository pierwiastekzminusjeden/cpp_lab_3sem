CXX=g++
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

.PHONY: clean run backup cB

clean:
	rm -f $(OUTPUT) $(OBJ)

run: $(OUTPUT)
	./$(OUTPUT)

backup:
	if [ -d "./backup" ]; then rm -r backup; fi
	mkdir backup
	cp $(SRC) backup
	cp *.h backup

cB:
	rm -r backup
