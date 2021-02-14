run_dynamicMat:  mainDynamic.o matrix_dynamic.o
	gcc  mainDynamic.o matrix_dynamic.o -o run_dynamicMat

mainDynamic.o: mainDynamic.c matrix_dynamic.h
	gcc -c mainDynamic.c

matrix_dynamic.p: matrix_dynamic.c matrix_dynamic.h
	gcc -c matrix_dynamic.c

clean:
	rm *.o
	rm run_staticMat
