# Define variables
CC = g++
SOURCES = main.cpp modules/tempTfunctions.cpp  
EXECUTABLE = main

# The default target
all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CC) $(SOURCES) -o $(EXECUTABLE)

# Rule to clean up
clean:
	rm -f $(EXECUTABLE)