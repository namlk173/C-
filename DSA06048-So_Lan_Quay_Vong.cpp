#include<bits/stdc++.h>
using namespace std;

int roll(long long a[], int n){
	for(int i=0; i<n-1; i++){
		if(a[i]>a[i+1]){
			return i+1;
		}
	}
	return 0;
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		int res=0;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		cout<<roll(a, n)<<endl;
	}
	return 0;
}
