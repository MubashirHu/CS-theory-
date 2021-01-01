#include <iostream>
#include <stdio.h>

using namespace std;

struct Node 
{
	int data;
	Node* link;
};

void insert(Node** ptr_to_head, int x)
{
	Node* temp = new Node();
	temp->data = x;
	temp->link = *ptr_to_head;
	*ptr_to_head = temp;
	
}

void print(Node* head)
{
	//traverse through the linked list
	Node* temp = head;
	
	while(temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->link;
	}
	
}

int main () {

Node* head = NULL; // means that the list is empty

// the reason you don't need to need a catch is because you are changing accessing the head pointer directly with the & sign.
// therefore doesn't need to be caught
 insert(&head, 5);
 insert(&head, 4);
 insert(&head, 3);
 insert(&head, 2);
 insert(&head, 2);
 insert(&head, 2);
 insert(&head, 2);

print(head);
	
return 0;
	
}
