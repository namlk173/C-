#include<bits/stdc++.h>
using namespace std;

void in(int a[], int k){
	for(int i=0; i<k; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sinh_tap_con_ke_tiep(int a[], int n, int k){
	int i = k-1;
	while(i>=0 && a[i]==n-k+i+1){
		i--;
	}
	if(i>=0){
		a[i] = a[i] + 1;
		for(int j=i+1; j<k; j++){
			a[j] = a[i] + j -i;
		}
		in(a, k);
	} else {
		for(int i=1; i<=k; i++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return;
}

int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[k];
		for(int i=0; i<k; i++){
			cin>>a[i];
		}
		sinh_tap_con_ke_tiep(a, n, k);
	}
	return 0;
}
