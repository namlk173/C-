#include<bits/stdc++.h>
using namespace std;
int t, n;

string check(int a[], int b[], int n){
	for(int i=0; i<n; i++){
		if(a[i]!=b[i] && a[i]!=b[n-1-i]) return "No";
	}
	return "Yes";
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int a[n], b[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		cout<<check(a, b, n)<<endl;
	}
	return 0;
}
