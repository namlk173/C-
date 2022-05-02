#include<bits/stdc++.h>
using namespace std;
int t;
char a[20];
bool check(char a[]){
	for(int i =0; i<strlen(a)-1; i++){
		if(abs((a[i]-'0')-(a[i+1]-'0'))!=1){
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

