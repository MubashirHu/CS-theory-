/*pointers

Mubashir Hussain

*/

#include<iostream>
using namespace std;


int main() {
	
	int a = 12; // variable of a
	cout << "address of a " << &a << endl;
	
	int *p; // create a pointer named p to point to an integer datatype
	p = &a; // i make the pointer equal to the address of a
	
	cout <<"p is now equal to the address of a " << p << endl;
	
	*p = 13; // I change the value at the address the p is pointing to 
	
	cout <<"the changed value of p is now " << *p << endl;
	
	/*
	So overall 
	
	p = address [referencing]
	*p = value at that address [dereferencing]
	*/
}
