CC := gcc
CFLAGS := -g -Wall -Wextra
DEST = ./bin

build:
	$(CC) $(CFLAGS) ./src/*.c -o ./bin/spending_manager	

clean: 
	$(RM) ./bin/*