TARGET = drm-single
CC = gcc
CFLAGS = -I .
OBJS = $(TARGET).o
BUILD_DIR = build
DEPS = 
LIBDRM = `pkg-config --cflags libdrm` `pkg-config --libs libdrm`

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBDRM)
	@mkdir -p $(BUILD_DIR)
	@mv *.o $(BUILD_DIR)
	@cp $(TARGET) $(BUILD_DIR)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) $(LIBDRM)

.PHONY: clean

clean:
	rm -rf $(BUILD_DIR) $(TARGET)
