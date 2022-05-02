#include<bits/stdc++.h>
using namespace std;
int t;
char a[1000];
bool markup[9];
int check(char a[]){
	for(int i=0;i<9;i++){
		markup[i]=0;
	}
	if(a[0]=='0') return 0;
	for(int i =0; i<strlen(a);i++){
		if(!isdigit(a[i])) return 1;
		else{
			int x = a[i]-'0';
			markup[x] = 1;
		}
	}
	for(int i =0;i<9;i++){
		if(markup[i]==0){
			return 2;
		}
	}
	return 3;
}
int main(){
	cin>>t;
	while(t--){
		cin>>a;
		if(check(a)==0||check(a)==1){
			cout<<"INVALID";
		}
		else if(check(a)==2){
			cout<<"NO";
		}
		else{
			cout<<"YES";
		}
		cout<<endl;
	}
	return 0;
}
