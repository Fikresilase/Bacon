
### 13. `Makefile`

```makefile
CC = gcc
CFLAGS = -Iinclude
SRC = src/bacon.c src/lexer.c src/parser.c src/evaluator.c src/utils.c
OBJ = $(SRC:.c=.o)
TARGET = bacon

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)
