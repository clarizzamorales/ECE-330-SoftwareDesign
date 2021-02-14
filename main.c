#include <stdio.h>
#include <stdlib.h>
#include "matrix_static.h"


int main()
{
	//Ask user for # of rows and columns 
	int rows;
	int colms;

	printf("Hello, please enter the total # of rows and columns 1 at a time:\n");
	scanf("%d %d", &rows, &colms);

	//Create an empty matrix
	matrix mat;
	matrix transposeOfMat;
	mat = create_initval(rows, colms, 0);

	//Store matrix elements by asking user to enter them
	
	int a;
	int b;
	double val;

	printf("Please, input the elements for your matrix:\n");
	for(a=0; a < rows; a++){
		for(b=0; b < colms; b++){
			printf("(Row[%d],Col[%d]):\n", a, b);
			scanf("%lf", &val);
			assign(a,b,&mat, val);
		}
	}
	
	//print out matrix entered by the user
	
	printf("You have entered the following matrix:\n");

	matrix_print(mat);

	//take the transpose of the matrix 
	transposeOfMat = TransposeOfMatrix(mat);
	
	//print out output of transposed matrix
	
	printf("Your transposed matrix is: ");
	matrix_print(transposeOfMat);
	
}
