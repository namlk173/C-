#include<bits/stdc++.h>
using namespace std;


void in(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sinh_hoan_vi_ke_tiep(int a[], int n){
	int j = n-2;
	while(j>=0 && a[j] > a[j+1]){
		j--;
	}
	if(j>=0){
		int k = n-1;
		while(a[j] > a[k]){
			k--;
		}
		swap(a[j], a[k]);
		int r = j +1, s = n-1;
		while(r<=s){
			swap(a[r], a[s]);
			r++;
			s--;
		}
		in(a, n);
	} else {
		for(int i=0; i<n; i++){
			cout<<i+1<<" ";
		}
		cout<<endl;
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
		sinh_hoan_vi_ke_tiep(a, n);
	}
	return 0;
}
