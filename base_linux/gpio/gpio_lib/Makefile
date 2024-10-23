# Defining variables
TARGET = gpio_lib

# Defining compiler
CC = gcc

# Defining the path of the header files
CFLAGS = -I .

# Defining the objects files
OBJS = $(TARGET).o

# Defining the include files
DEPS = 

# Defining the storage location of .o files
BUILD_DIR = build

# Adding additional libraries
LIBGPIOD = `pkg-config --cflags libgpiod` `pkg-config --libs libgpiod`

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBGPIOD)
	@mkdir -p $(BUILD_DIR)
	@mv *.o $(BUILD_DIR)
	@cp $(TARGET) $(BUILD_DIR)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(LIBGPIOD)

.PHONY: clean

clean:
	rm -f $(TARGET)
	rm -rf $(BUILD_DIR)
