#include<bits/stdc++.h>
using namespace std;
int t;
long long n;
long long A[88];
bool check(long long n, long long A[]){
	for(int i =0; i<88;i++){
		if(n==A[i]) return 1;
	}
	return 0;
}
int main(){
	A[0] = 1;
	A[1] = 1;
	for(int i = 2; i<88; i++){
		A[i]=A[i-1]+A[i-2];
	}
	cin>>t;
	while(t--){
		cin>>n;
		if(check(n,A)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
