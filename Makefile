run_staticMat: main.o matrix_static.o mainDynamic.o matrix_dynamic.o
	gcc main.o matrix_static.o mainDynamic.o matrix_dynamic.o -o run_staticMat

main.o: main.c matrix_static.h
	gcc -c main.c

matrix_static.o: matrix_static.c  matrix_static.h
	gcc -c matrix_static.c

mainDynamic.o: mainDynamic.c matrix_dynamic.h
	gcc -c mainDynamic.c

matrix_dynamic.p: matrix_dynamic.c matrix_dynamic.h
	gcc -c matrix_dynamic.c

clean:
	rm *.o
	rm run_staticMat
