# Define variables 
CC = g++ 
PKG_CONFIG = pkg-config 
OPENCV_CFLAGS = $(shell $(PKG_CONFIG) --cflags opencv4)
OPENCV_LIBS = $(shell $(PKG_CONFIG) --libs opencv4)
SOURCES = main.cpp 
EXECUTABLE = compiledCode/main.out 

# The default target 
all: $(EXECUTABLE)
$(EXECUTABLE): $(SOURCES)
	$(CC) $(SOURCES) -o $(EXECUTABLE) $(OPENCV_CFLAGS) $(OPENCV_LIBS)


# Rule to clean up the compiled code 
clean: 
	rm -rf $(EXECUTABLE) 