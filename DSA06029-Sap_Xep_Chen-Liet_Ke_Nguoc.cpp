#include<bits/stdc++.h>
using namespace std;

void in(int a[], int n) {
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sap_xep_chen(int a[], int n){
	int step[n][n];
	for(int i=0; i<n; i++){
		int key = a[i];
		int j = i-1;
		while(key < a[j] && j>=0){
			a[j+1] = a[j];
			j = j - 1;
		}			
		a[j+1] = key;
		for(int k=0; k<n; k++){
			step[i][k] = a[k];
		}
	}
	for(int i=n-1; i>=0; i--){
		cout<<"Buoc "<<i<<": ";
		in(step[i], i+1);
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
