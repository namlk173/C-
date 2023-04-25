#include<bits/stdc++.h>
using namespace std;

void in(int a[], int n) {
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sap_xep_noi_bot(int a[], int n){
	int step[n][n];
	int number_swap = 0;
	for(int i=0; i<n; i++){
		bool is_swap = false;
		for(int j=0; j<n-1-i; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
				is_swap = true;
			}
		}
		if(is_swap){
			for(int k=0; k<n; k++){
				step[number_swap][k] = a[k];
			}
			number_swap = number_swap + 1;
		} else{
			break;
		}
	}
	for(int i=number_swap-1; i>=0; i--){
		cout<<"Buoc "<<i+1<<": ";
		in(step[i], n);
	}
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
		sap_xep_noi_bot(a, n);
	}
	return 0;
} 
