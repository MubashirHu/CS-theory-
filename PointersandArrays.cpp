#include <stdio.h>
/*
This is just a small code to show how pointers traverse through arrays.
and also the different notation that can be taken to traverse through
*/

int main()
{
	int A[5] = {2,4,5,8,1};
	
	int *p = &A[0]; // this will point to the first value of array A, same as doing => int *p = A[0];
	
	for ( int i = 0; i < 5; i++)
	{
		printf("the output value for A[%d]is %d\n", i, *(A + i) );
		printf("the output address for A[%d]is %d\n", i, A + i);
	
	//	p++; // valid
	//	A++; //invalid
	}
	
	printf("----------------------------------------------\n");
	
	
	for ( int i = 0 ; i < 5; i++)
	{
			// can also do it this way
	
		printf("the output value for A[%d]is %d\n", i, A[i] );
		printf("the output address for A[%d]is %d\n", i, &A[i]);
	}

}
