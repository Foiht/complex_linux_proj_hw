CC = gcc
OBJS = main.o func.o
DEPS = header.h

main: $(OBJS)
	$(CC) -o simple_proj $^

main.o: main.c $(DEPS)
	$(CC) -c $^

func.o: func.c $(DEPS)
	$(CC) -c $^

clean_extras:
	rm -rf *.o *.h.gch

clean_all:
	rm -rf *.o *.h.gch main