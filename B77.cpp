#include<bits/stdc++.h>
using namespace std;
int t;
char a[500];
bool check(char a[]){
	for(int i =0; i< strlen(a); i++){
		if(a[strlen(a)-1-i]!=a[i]){
			return 0;
		}
	}
	for(int i =0; i< strlen(a); i++){
		if((a[i]-'0')%2!=0){
			return 0;
		}
	}
	return 1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>a;
		if(check(a)==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
