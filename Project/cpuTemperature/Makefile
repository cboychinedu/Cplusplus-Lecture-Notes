# Define the target executable 
CC = g++ 
CFLAGS = -Wall -Iheaders
LDFLAGS = 
SOURCES = main.cpp
EXECUTABLE = compiledProgram/main.out

# The default target 
all: $(EXECUTABLE)
$(EXECUTABLE): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(EXECUTABLE) $(LDFLAGS)


# Rule to clean up compiled files 
clean: 
	rm -f $(EXECUTABLE)