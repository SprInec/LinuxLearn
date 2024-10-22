# Defining Variables
TARGET = systemcall

# Defining the Compiler
CC = gcc

# Define the path of the header files
CFLAGS = -I .

# Define the header files
DEPs = 

# Define the object file
OBJS = $(TARGET).o

# Define the path of the object files
BUILD_DIR = build

# Target file
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)
# Create a compilation output folder
	@mkdir -p $(BUILD_DIR)
# Move the .o file to the output folder
	@mv *.o $(BUILD_DIR)
# Copy the executable program to the output folder
	@cp $(TARGET) $(BUILD_DIR)

# Generation rules for *.o files
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Phony target
.PHONY: clean

# make clean: Deleate the compilation results
clean:
# Delete the executable program
	rm -f $(TARGET)
# Delete the output folder
	rm -rf $(BUILD_DIR)
# Delete files created by program
	rm -f testscript.sh 
