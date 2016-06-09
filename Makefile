.PHONY: all clean dist

EXE:=

%$(EXE): %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $@ $< $(LDFLAGS)

SRCS:=$(wildcard *.cpp)
OBJS:=$(SRCS:%.cpp=%.o)
TARGET:=$(SRCS:%.cpp=%$(EXE))

CXX:=g++
CXXFLAGS:=-O2 -Wall -W
CPPFLAGS:=
LDFLAGS:=-s

all: $(TARGET)

clean:
	-$(RM) $(TARGET) $(OBJS)
