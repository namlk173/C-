#include<bits/stdc++.h>
using namespace std;

long long modulo = pow(10, 9) + 7;

long long luy_thua(long long n, long long k){
	if (k==0) {
		return 1;
	} 
	if (k%2==0){
		long long t = luy_thua(n, k/2);
		return (t*t)%modulo;
	} else {
		return (luy_thua(n, k-1) * n) %modulo;
	}
}

int main(){
	int t;
	long long n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<luy_thua(n, k)<<endl;
	}
	return 0;
}
