all:
	gcc -c basic.c
	gcc -c linkedlist.c
	gcc -c 3d-allocation.c
	gcc -c graphs.c
	gcc -c graphs2.c
	gcc -c tree.c
	gcc -c hashmap.c
clean:
	rm *.o
