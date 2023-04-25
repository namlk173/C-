#include<bits/stdc++.h>
using namespace std;

void in(int a[], int n){
	cout<<"[";
	for(int i=0; i<n; i++){
		if(i==n-1){
			cout<<a[i];
		} else {
			cout<<a[i]<<" ";
		}
	}
	cout<<"]";
	cout<<endl;
	return;
}

void sinh(int a[], int n){
	in(a, n);
	for(int i=0; i<n-1; i++){
		a[i] = a[i] + a[i+1];
	}
	if(n==1) return;
	sinh(a, n-1);
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sinh(a, n);
	}
	return 0;
}
