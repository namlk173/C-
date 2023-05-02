#include<bits/stdc++.h>
using namespace std;

void in(int a[], int n) {
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sap_xep_noi_bot(int a[], int n){
	int step = 1;
	for(int i=0; i<n; i++){
		bool is_swap = false;
		for(int j=0; j<n-1-i; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
				is_swap = true;
			}
		}
		if(!is_swap){
//			cout<<"Buoc "<<step++<<": ";
//			in(a, n);
			break;	
		}
		else {
			cout<<"Buoc "<<step++<<": ";
			in(a, n);
		}
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sap_xep_noi_bot(a, n);
} 
