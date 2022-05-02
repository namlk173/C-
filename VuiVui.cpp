#include<iostream>
using namespace std;
int a[100];
int n;
int x;
int findIndex(int x){
	for(int i=1;i<=n;i++){
		if(x==a[i]){
			return i;
			break;
		}	
	}
	return -1;
}
int main(){
	cin >>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(1){
	cin>>x;
	cout<<findIndex(x)<<endl;
	}
	return 0;
}
