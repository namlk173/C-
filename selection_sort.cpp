#include<bits/stdc++.h>
using namespace std;

void in(int a[], int n) {
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sap_xep_chon(int a[], int n){
	int step = 1;
	for(int i=0; i<n-1; i++){
		int min_index = i;
		for(int j=i+1; j<n; j++){
			if(a[min_index] > a[j]) {
				min_index = j;
			}
		}
		swap(a[i], a[min_index]);
//		if(i != min_index) {
			cout<<"Buoc "<<step++<<": ";
			in(a, n);			
//		}
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sap_xep_chon(a, n);
}
