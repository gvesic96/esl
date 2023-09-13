SRC_CPP=$(wildcard *.cpp)
SRC_HPP=$(wildcard *.hpp)
MAIN_TARGET=typeDef*.cpp
TARGET=$(patsubst %.cpp,%,$(wildcard typeDef*.cpp))
all: $(TARGET)
$(TARGET): $(SRC_CPP) $(SRC_HPP)
	g++ -std=c++14 -o $@ *.cpp
.PHONY: clean
clean:
	rm $(TARGET) 
