#include<bits/stdc++.h>
using namespace std;
int n,p,x,t;
long long int A[10001];
int main(){
	A[0] = 1;
	A[1] = 1;
	for(int i = 2; i < 10001; i++){
		A[i] = A[i-1] *i;
	}
	cout<<A[60];
	cin>>t;
	while(t--){	
	}
	return 0;
}
