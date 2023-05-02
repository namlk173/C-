#include<bits/stdc++.h>
using namespace std;
const int module = 1000000000 + 7;

long long bac_thang(int n, int k){
	int l = max(k, n);
	long long a[l];
	a[0] = 1;
	for(int i=1; i<n; i++){
		a[i] = 0;
	}
	for(int i=1; i<k; i++){
		for(int j=0; j<i; j++){
			a[i] = (a[i] + a[j])%module;
		}
		a[i] = (a[i] + 1)%module;
	}
	for(int i=k; i<l; i++){
		for(int j=i-k; j<i; j++){
			a[i] = (a[i] + a[j])%module;
		}
	}
//	for(int i=0; i<l; i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
	return a[n-1];
}

int main() {
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<bac_thang(n,k)<<endl;
	}	
	return 0;
}
