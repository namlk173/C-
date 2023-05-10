#include<bits/stdc++.h>
using namespace std;
int n, x;
	
struct Node {
	int data;
	struct Node *next;
};

struct Node * head = NULL;

void insert(int new_data){
	struct Node *ptr;
	Node *new_node = new Node;
	new_node->data = new_data;
	new_node->next = NULL;
	ptr = head;
	if(ptr == NULL){
		head = new_node;
	} else {
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next= new_node;
	}
}


void display(){
	struct Node *ptr;
	ptr = head;
	while(ptr != NULL){
		if(ptr->data!=x){
			cout<<ptr->data<<" ";
		}
		ptr = ptr->next;
	}
	cout<<endl;
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		insert(x);
	}
	cin>>x;
	display();
	return 0;
}

