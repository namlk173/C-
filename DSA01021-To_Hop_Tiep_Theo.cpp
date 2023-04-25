#include<bits/stdc++.h>
using namespace std;

bool contain(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i]==x) return true;
	}
	return false;
}

int so_buoc_thay_doi(int a[], int n, int k){
	int mark[k];
	for(int i=0; i<k; i++){
		mark[i] = a[i];
	}	
	int i=k-1;
	while(i>=0 && a[i] == n-k+i+1){
		i--;
	}
	int res = 0;
	if(i>=0){
		a[i] = a[i] + 1;
		res++;
		for(int j=i+1; j<k; j++){
			if(!contain(mark, n, a[i]+j-i)){
				res++;
			}
		}
		return res;
	}
	return k;
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
		cout<<so_buoc_thay_doi(a, n, k)<<endl;
	}
	return 0;
}
