#include <iostream>
#include <stdlib.h>
#include <stdio.h>

/*
This file shows pretty much how to create a linked list.

'node' this will be the information that will be accessed or is a container which stores various fields. Usually defined as a struct
'head' this is usually pointer to the very first node of the list
'temp' this is a pointer which can flexibly be used in function calls to traverse/order a linked list. 

note: 

making linked lists in C versus C++ is different, each of them have a separate notation
*/
using namespace std;

struct Node
{
	int data;
	struct Node* next; 	// for C it will be Struct Node*
};

// for C it will be Struct Node* head
struct Node* head;

void insert(int x)
{
//	Node* temp = new Node(); // make space in memory for the new node.
	Node* temp =  (Node*)malloc(sizeof(struct Node*));
	temp->data = x; // fill the data field in memory with the value passed in
	temp->next = head; // there will be a link made between the next and the head field 
	head = temp; // the head stores the address of the new address that was made in the memory
}

void print()
{
Node* temp = head; // creates a temporary pointer to head

	cout << "the list is: " ; 
	
while(temp != NULL) // so if the pointer is not null then do the following execution
{

	cout << temp->data; // print the data field of what head is pointing to
	temp = temp->next ; // note: temp->next stores the memory address of the next link
						// so by assigning that address to temp, allows to traverse the array itself
	
}
  
cout << endl;

}

int main()
{
	head = NULL; // means empty list in the beginning
	cout << "how many numbers do you want to type in " << endl;
	int n, i, x;
	
	cin >> n;
	
	for ( i = 0 ; i < n ; i++)
	{
		cout <<"enter the number" << endl;
		cin >> x;
		insert(x);
		print();
	}
	
	
}

