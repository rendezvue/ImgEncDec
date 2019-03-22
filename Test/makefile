OPENCV_CFLAG = `pkg-config opencv4 --cflags`
OPENCV_LIBS = `pkg-config opencv4 --libs`

TARGET = ImgEncDec

CC = gcc
LD = gcc

VPATH = .

CXXFLAGS = $(OPENCV_CFLAG) -I../ -O3 -g3 -Wall -std=c++11 -fopenmp -openmp
LIBS = -lpthread -ldl -lm -lrt -lc -lstdc++ -lboost_system -lboost_thread -lboost_filesystem -lboost_regex -lgomp $(OPENCV_LIBS)

SRCDIRS		= .

#SRCS = $(foreach dir, . $(SRCDIRS),$(wildcard $(dir)/*.cpp))
SRCS = test.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $^ -o $(TARGET) $(LIBS) $(SYSROOT)

%o:%cpp
	$(CC) $(CXXFLAGS) -c $< -o $@ $(SYSROOT)

clean:
	-rm -rf $(OBJS)
	-rm -f $(TARGET)
	-rm depend
	

depend: $(SRCS)
	$(CC) -M $(CXXFLAGS) $^ > $(notdir $@)

-include depend
