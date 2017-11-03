CXX=clang++
CXXFLAGS=-g -Wall
CXXFLAGS+=-pedantic
MAIN=Lab02
HEADER=Lab02
SOURCE=fun
OUTPUT=test

$(OUTPUT): $(MAIN).o $(SOURCE).o
	$(CXX) $^ -o $@
$(MAIN).o: $(MAIN).cpp $(HEADER).h
	$(CXX) $(CXXFLAGS) $(MAIN).cpp -c
$(SOURCE).o: $(SOURCE).cpp $(HEADER).h
	$(CXX) $(CXXFLAGS) $(SOURCE).cpp -c

val: $(OUTPUT)
	valgrind ./$(OUTPUT)

clean:
	rm -f *.o $(OUTPUT)
copy:
	mkdir $@
	cp *.cpp *.h copy
copy2:
	mkdir $@
	cp *.cpp *.h $@
copy3:
	mkdir $@
	cp *.cpp *.h $@
send:
	mkdir $@
	cp *.cpp *.h Makefile $@
