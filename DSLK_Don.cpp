#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};

struct Node * head = NULL;

void insert(int new_data){
//	struct Node * new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node *ptr;
	ptr = head;
	while(ptr != NULL){
		ptr = ptr->next;
	}
	Node *new_node = new Node;
	new_node->data = new_data;
	ptr->next = new_node;
	new_node->next = NULL;
	if(head->next==NULL) {
		head = new_node;
	}
}

//void delete_value(int value){
//	Node *cur = new Node;
//	Node *pre = new Node;
//	cur = head;
//	for(int i=1; i<pos; i++){
//		pre = cur;
//		cur = cur->next;
//	}
//	pre->next = cur->next;
//}


void display(){
	struct Node *ptr;
	ptr = head;
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
	cout<<endl;
}

int main(){
	int n, x;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		insert(x);
	}
	display();
	return 0;
}

