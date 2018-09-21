#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node *next;
};

class linked_list {
	node *head, *tail;
	public:
		linked_list() {
			head = NULL;
			tail = NULL;
		}

		// struct node* createNode(int data) {
		// 	node *temp = new node;
		// 	temp -> data = data;
		// 	temp -> next = NULL;
		// 	return temp;
		// }

		int insertAtBeginnning(int data) {
			node *temp = new node;
			temp -> data = data;
			temp -> next = head;
			head = temp;
			return temp->data;
		}

		int displayList() {
			struct node *temp;
			temp = head; int count = 0;
			while(temp != NULL) {
				// cout<<temp -> data;
				// cout<<endl;
				count++;
				temp = temp -> next;//checks if temp.next contains null
			}
			return count;
		}
};

int main() {
	linked_list l;
	cout<<l.insertAtBeginnning(5)<<endl;
	cout<<l.insertAtBeginnning(514)<<endl;
	cout<<l.insertAtBeginnning(5415)<<endl;
	cout<<l.displayList()<<endl;

}
