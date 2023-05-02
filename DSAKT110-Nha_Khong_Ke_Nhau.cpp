#include<bits/stdc++.h>
using namespace std;
int t, n;

long long nha_khong_ke_nhau(long long a[], int n){
	long long value[n];
	value[0] = a[0];
	if(n>=2) value[1] = a[1];
	if(n>=3) value[2] = a[0] + a[2]; 
	for(int i=3; i<n; i++){
		value[i] = max(value[i-2], value[i-3]) + a[i];
	}
//	for(int i=0; i<n; i++){
//		cout<<value[i]<<" ";
//	}
//	cout<<endl;
	long long Max = value[0];
	for(int i=0; i<n; i++){
		Max = max(Max, value[i]);
	}
	return Max;
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		cout<<nha_khong_ke_nhau(a, n)<<endl;
	}
	return 0;
}
