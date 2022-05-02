#include<bits/stdc++.h>
using namespace std;
int n;
int t;
int find_result(int n){
	if(n==1) return 1;
	int x =sqrt(n);
	for(int i = 2; i<= x;i++){
		if(n%i==0) return i;
	}
	return n;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
	for(int i =1; i<=n; i++){
		cout<<find_result(i)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
