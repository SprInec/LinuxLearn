TARGET = gpio_system
CC = gcc
CFLAGS = -I .
DEPS = 
BUILD_DIR = build
OBJS = $(TARGET).o

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)
	@mkdir -p $(BUILD_DIR)
	@mv *.o $(BUILD_DIR)
	@cp $(TARGET) $(BUILD_DIR)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(TARGET)
	rm -rf $(BUILD_DIR)
	