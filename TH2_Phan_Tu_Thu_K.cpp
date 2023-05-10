#include<bits/stdc++.h>
using namespace std;
int t, n, m, k;

int phan_tu_thu_k(int a[], int b[], int n, int m, int k){
	int i=0, j=0;
	while(i<n && j<m){
		if(a[i]<=b[j]){
			k--;
			if(k==0) return a[i];
			i++;
		} else {
			k--;
			if(k==0) return b[j];
			j++;
		}
	}
	while(i<n){
		k--;
		if(k==0) return a[i];
		i++;
	}
	while(j<m){
		k--;
		if(k==0) return b[j];
		j++;
	}
}

int main(){
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		int a[n], b[m];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<m; i++){
			cin>>b[i];
		}
		sort(a, a+n);
		sort(b, b+m);
		cout<<phan_tu_thu_k(a, b, n, m, k)<<endl;
	}
	return 0;
}
