#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node* next; //next has a data type of node, so it can point to other variable of data type of node
};

int get_length (node* head) {
	int count = 0;
	while(head != NULL) {
		head = head->next;
		count++;
	}
	return count;
}

struct node* get_nth_element(struct node* head, int n) {
	if(n < 0) {
		return NULL; //out  of bound check for -ve numbers
	}

	int i = 0;
	while(head != NULL && i < n) {
		head = head -> next;
		i++;
	}
	return head;
}

int pop_first_elememt(struct node** headRef) {
	
}

void append_at_last(struct node** headRef, int data) {
	if(*headRef == NULL) { //handle a 0 element lit as a special case
		*headRef = (struct node *)malloc(sizeof(struct node));
		(*headRef) -> data = data;
		(*headRef) -> next = NULL;
		return;
	}

	struct node* head = *headRef;
	while((*headRef)->next != NULL) {
		head = head -> next;
	} //at the end of this while loop we have head pointing to the last element

	head -> next = (struct node*)malloc(sizeof(struct node));
	head -> next -> data = data;
	head -> next -> next = NULL;
}

int main() {

	int n = 1;
	node* head = NULL;
	head -> data = 2;
	// cout<<get_length(head)<<endl;
	// cout<<get_nth_element(head,n)<<endl;
	cout<<append_at_last(head);
} 
