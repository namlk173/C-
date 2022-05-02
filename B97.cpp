#include<bits/stdc++.h>
using namespace std;
int t;
long long int n;
long long int A[92];
bool check(long long int n, long long int A[]){
	for(int i =0; i<92;i++){
		if(n==A[i]) return 1;
	}
	return 0;
}
int main(){
	A[0] = 1;
	A[1] = 1;
	for(int i = 2; i<92; i++){
	A[i]=A[i-1]+A[i-2];
	}
	cin>>t;
	while(t--){
		cin>>n;
		if(check(n,A)||n==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
