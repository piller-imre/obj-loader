CC = gcc

CFLAGS = -Iinclude -g -O2 -std=c99 -Wall -Wextra -Wpedantic
LDFLAGS = 

SOURCES = \
        src/model.c \
		loader.c

OBJECTS = $(SOURCES:.c=.o)

EXECUTABLE = loader

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE) : $(OBJECTS)
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJECTS)

