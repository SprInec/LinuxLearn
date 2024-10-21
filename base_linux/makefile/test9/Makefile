# Defining variables
# ARCH default to x86, using the gcc compiler
# Otherwise use the arm compiler
ARCH ?= aarch64
TARGET = hello_main

# Path to store intermediates files
BUILD_DIR = build_$(ARCH)

# Path to store the source files
SRC_DIR = sources

# Path to store the includes files
INC_DIR = includes .

# The source files
SRCS = $(wildcard $(SRC_DIR)/*.c)

# The objects files
OBJS = $(patsubst %.c, $(BUILD_DIR)/%.o, $(notdir $(SRCS)))

# The header files
DEPS = $(wildcard $(INC_DIR)/*.h)

# Specity the path to the header files
CFLAGS = $(patsubst %, -I %, $(INC_DIR))

# Select compiler based on input ARCH variable
# ARCH = arm, use gcc
# ARCH = aarch64, use arm-gcc
ifeq ($(ARCH), arm)
CC = gcc
else
CC = aarch64-linux-gnu-gcc
endif

# Target file
$(BUILD_DIR)/$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

# Generation rules for the *.o files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(DEPS)
	@mkdir -p $(BUILD_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)
	
# Phony targets
.PHONY: clean cleanall

# Delete by Schema
clean:
	rm -rf $(BUILD_DIR)
	
# Delete all
cleanall:
	rm -rf build_aarch64 build_arm
