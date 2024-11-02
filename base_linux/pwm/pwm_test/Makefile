TARGET = pwm_test
CC = gcc
CFLAGS = -I .
OBJS = $(TARGET).o
BUILD_DIR = build
DEPS = 

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)
	@mkdir -p $(BUILD_DIR)
	@mv *.o $(BUILD_DIR)
	@cp $(TARGET) $(BUILD_DIR)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	rm -rf $(BUILD_DIR) $(TARGET)