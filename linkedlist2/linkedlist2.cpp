#include <iostream>
#include <stdlib.h>
#include <stdio.h>

/*
This file shows pretty much how to create a linked list.

'node' this will be the information that will be accessed or is a container which stores various fields. Usually defined as a struct
'head' this is usually pointer to the very first node of the list
'temp' this is a pointer which can flexibly be used in function calls to traverse/order a linked list. 
'**pointer' this basically means that it is a pointer to a pointer. So making a derefernce will lead you to be working with the pointer that is being pointed.

note: 

making linked lists in C versus C++ is different, each of them have a separate notation
*/
using namespace std;

struct Node
{
	int data;
	struct Node* next; 	// for C it will be Struct Node*
};

// the return type doesn't have to be a pointer type this time because we are changing something at the head address itself
void insert(Node** pointertoHead, int x) // this is not the same 'head' as the one in int main(), it is local to this function but it has the contents of the head contained in it
{
//	Node* temp = new Node(); // make space in memory for the new node.
	Node* temp =  (Node*)malloc(sizeof(struct Node*));
	temp->data = x; // fill the data field in memory with the value passed in
	temp->next = *pointertoHead; // there will be a link made between the next and the head field 
	*pointertoHead = temp; // the head stores the address of the new address that was made in the memory
	
	/*
because what's being passed is a pass by reference. 
and also because what that address is refering to we
 need to create a pointer to a pointer to dereference 
 it so that we can get the actual pointer itself
*/
}

void print(Node* head) // this head is different from the one that is in the int main() function
{
	cout << "the list is: " ; 
	
while(head != NULL) // so if the pointer is not null then do the following execution
{

	cout << head->data; // print the data field of what head is pointing to
	head = head->next ; // note: temp->next stores the memory address of the next link
						// so by assigning that address to temp, allows to traverse the array itself
	
}
  
cout << endl;

}

int main()
{
	Node* head = NULL; // now that the head is not accessible in other functions
	cout << "how many numbers do you want to type in " << endl;
	int n, i, x;
	
	cin >> n;
	
	for ( i = 0 ; i < n ; i++)
	{
		cout <<"enter the number" << endl;
		cin >> x;
		
		// here we pass the address of the head pointer to the insert function
		insert(&head, x);
		print(head);
	}
	
	
}

