#include<bits/stdc++.h>
using namespace std;

void in(int a[], int n) {
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sap_xep_chen(int a[], int n){
	for(int i=0; i<n; i++){
		int key = a[i];
		int j = i-1;
		while(key < a[j] && j>=0){
			a[j+1] = a[j];
			j = j - 1;
		}			
		a[j+1] = key;
		cout<<"Buoc "<<i<<": ";
		in(a, i+1);
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sap_xep_chen(a, n);
}
