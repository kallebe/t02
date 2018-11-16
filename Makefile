all: mst.out clean

mst.out: main.o grafos.o
	gcc -g main.o grafos.o -o mst.out

main.o: main.c
	gcc -g -c main.c

grafos.o: grafos.c
	gcc -g -c grafos.c
clean:
	rm *.o