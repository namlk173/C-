#include<bits/stdc++.h>
using namespace std;
int t;
int x;
bool check_snt(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	int x= sqrt(n);
	for(int i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int UCln(int x, int y){
	while(x!=0){
		int temp = x;
		x= y%x;
		y =temp;
	}
	return y;
}
int main(){
	cin>>t;
	while(t--){
		cin>>x;
		if(check_snt(x)){
			if(check_snt(x-1)){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		else{
			int count=0;
			for(int i =1; i<x; i++){
				if(UCln(i,x)==1){
					count++;
				}
			}
			if(check_snt(count)){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		cout<<endl;
		
	}
	return 0;
}
