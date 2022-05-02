#include<bits/stdc++.h>
using namespace std;
int step;
bool t = false;
char a[1000000];

int main(){
int count=0;
	cin>>step;
	for(int i=0;i<step;i++){
		cin>>a[i];
	}
	int level=0;
	for(int i=0;i<step;i++){	
	if(a[i]=='U') level++;
	else if(a[i]=='D') level--;	
	if(level<0) t = true;
	if(level == 0 && t==true){
		count++;
		t = false;
	}
	}
	cout<<count;
	return 0;
}
