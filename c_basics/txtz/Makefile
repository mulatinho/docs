all: tracker

tracker: ptracker_main.c
	gcc -W -g -ggdb -o ptracker_utils.o -c ptracker_utils.c
	gcc -W -g -ggdb -o ptracker_mem.o -c ptracker_mem.c
	gcc -W -g -ggdb -o ptracker_main.o -c ptracker_main.c
	gcc -W -g -ggdb -o ptracker ptracker_main.o ptracker_utils.o ptracker_mem.o

test: ptracker_funcs.c
	gcc -W -g -ggdb -o ptracker_funcs ptracker_funcs.c


clean:
	rm -f *.o *~ ptracker ptracker_funcs
