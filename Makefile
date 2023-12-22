CC = gcc
SOURCE = linkedList.c testLinkedList.c
OBJ = linkedList.o testLinkedList.o
HEADER = linkedList.h

check_cycle: ${OBJ} ${HEADER}
	$(CC) $(OBJ) -o runLL

%.o: %.c $(HEADER)
	$(CC) $< -c

clean:
	rm -rf runLL
	rm -rf *.o
