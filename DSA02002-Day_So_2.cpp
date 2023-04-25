#include<bits/stdc++.h>
using namespace std;
#define Max 100
int storage[Max][Max];

void in(int a[], int n){
	cout<<"[";
	for(int i=0; i<n; i++){
		if(i==n-1){
			cout<<a[i];
		} else{
			cout<<a[i]<<" ";
		}
	}
	cout<<"]"<<" ";
}

void sinh(int a[], int n){
	for(int i=0; i<n; i++){
		storage[n-1][i] = a[i];
	}
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
		for(int i=0; i<n; i++){
			in(storage[i], i+1);
		}
		cout<<endl;
	}
	return 0;
}
