#include<bits/stdc++.h>
using namespace std;

typedef struct node {
 	int infor;
 	struct node *left;
 	struct node *right;
}*Tree;

void Init(Tree *T){
	*T = NULL;
}

Tree GetNode(){
	Tree p;
	p = new node;
	return p;
}

int main(){
	Tree t;
	Init(&t);
	cout<<GetNode();
}
