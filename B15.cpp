#include<bits/stdc++.h>
using namespace std;
int a,  b;
bool check(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	int x = sqrt(n);
	for(int i =2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	cin>>a>>b;
	int Max= max(a,b);
	int Min= min(a,b);
	for(int i = Min; i<=Max; i++){
		if(check(i)) cout<<i<<" ";
	}
	return 0;
}
