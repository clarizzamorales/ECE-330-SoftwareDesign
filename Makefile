run_staticMat: main.o matrix_static.o
	gcc main.o matrix_static.o -o run_staticMat

main.o: main.c matrix_static.h
	gcc -c main.c

matrix_static.o: matrix_static.c  matrix_static.h
	gcc -c matrix_static.c

clean:
	rm *.o
	rm run_staticMat
