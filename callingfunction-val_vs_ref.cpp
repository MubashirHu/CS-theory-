#include<stdio.h>

void callbyvalue(int a)
{
	//adds 1 to the formal argument, ; note : formal argument - a variable in a method/function that's passed
	a = a + 1;
}

void callbyref(int *p)
{
	//LHS : dereferences the called address, 
	//RHS : adds 1 to the dereferenced address
	*p = *(p) + 1;
}

int main()
{

int a = 5;
callbyvalue(a); // pass in the value itself

printf("value of a with call by value : %d\n", a);

callbyref(&a); // pass in the address of a

printf("value of a with call by reference : %d\n", a);

}
