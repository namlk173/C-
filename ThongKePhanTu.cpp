#include<bits/stdc++.h>
using namespace std;
const int MAXLIST = 10000;

typedef struct list
{ 
	int n; 
  	int nodes[MAXLIST];            
};
int main(){
	list ds; 
	for(int i =0; i<100; i++){
		cout<<ds.nodes[i];
	}
	return 0;
}

