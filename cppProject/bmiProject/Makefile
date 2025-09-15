# Define variables 
CC = g++ 
SOURCES = main.cpp modules/bmiCalculator.cxx 
EXECUTABLE = main.out 

# The default target 
all: $(EXECUTABLE) 

$(EXECUTABLE) : $(SOURCES) 
	$(CC) $(SOURCES) -o $(EXECUTABLE)


# Rule to clean up 
clean: 
	rm -rf $(EXECUTABLE)