# path: base_linux/makefile/test8/Makefile
# Defining variables
TARGET = hello_main

# Path to store intermediate files
BUILD_DIR = build

# Path to store source files
SRC_DIR = sources

# Path to store include files
INC_DIR = includes .

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Object files (*.o)
OBJS = $(patsubst %.c, $(BUILD_DIR)/%.o, $(notdir $(SRCS)))

# Header files
DEPS = $(wildcard $(INC_DIR)/*.h)

# Specify the path to the header files
CFLAGS = $(patsubst %, -I %, $(INC_DIR))

# Target file
$(BUILD_DIR)/$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

# Generation rules for *.o files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(DEPS)

# Create a compilation directory to store process files
# The command is preceded by '@', which means it will not be 
# output on the terminnal.
	@mkdir -p $(BUILD_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)

# Phony target
.PHONY: clean cleanall

# Delete the output folder
clean: 
	rm -rf $(BUILD_DIR)
	
# Delete all
cleanall: 
	rm -rf $(BUILD_DIR)
