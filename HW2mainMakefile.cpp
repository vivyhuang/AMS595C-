CXX = g++
CXXFLAGS = -std=c++11 -Wall

# List of source files
SOURCES = HW2main.cpp approximations.cpp pi_approx.cpp

# List of object files
OBJECTS = $(SRCS:.cpp=.o)

# Executable name
EXECUTABLE = HW2main

# Default target
all: $(EXECUTABLE)

# Link object files and create the executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXECUTABLE)

# Rule to compile each source file into an object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean up the project (remove object files and the executable)
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)