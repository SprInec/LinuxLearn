TARGET = test

ARCH ?= arm

BUILD_DIR = build_$(ARCH)

SRC_DIR = sources

INC_DIR = includes .

SRCS = $(wildcard $(SRC_DIR)/*.c)

OBJS = $(patsubst %.c, $(BUILD_DIR)/%.o, $(notdir $(SRCS)))

DEPS = $(wildcard $(INC_DIR)/*.h)

CFLAGS = $(patsubst %, -I %, $(INC_DIR))

ifeq ($(ARCH), arm)
CC = gcc
else
CC = aarch64-linux-gnu-gcc
endif

$(BUILD_DIR)/$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)
	@cp $(BUILD_DIR)/$(TARGET) .

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(DEPS)
	@mkdir -p $(BUILD_DIR)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean cleanall

clean:
	rm -rf $(BUILD_DIR)
	rm -f $(TARGET)

cleanall:
	rm -rf build_*
	rm -f $(TARGET)
