#include<bits/stdc++.h>
using namespace std;
int t;
int n, a[10000000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
	sort(a,a+n);
	cout<<a[n-1];
	} 
	return 0;
} 
