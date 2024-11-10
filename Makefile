main: main.c assembler.c assembler.h decoder.c decoder.h loader.c loader.h
	gcc -Wall -o main main.c assembler.c decoder.c loader.c

clean:
	rm -f main
