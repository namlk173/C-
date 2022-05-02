#include<bits/stdc++.h>
using namespace std;
int t;
long long int n;
long long int A[93];
int main(){
	A[0] = 0;
	A[1] = 1;
	A[2] = 1;
	for(int i = 2; i<93; i++){
	A[i]=A[i-1]+A[i-2];
	}
	cin>>t;
	while(t--){
		cin>>n;
		cout<<A[n]<<endl;
	}
	return 0;
}
