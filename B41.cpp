#include<bits/stdc++.h>
using namespace std;
int t, n ,a[10000000],x;
int index(int a[], int n, int x){
	for(int i =0; i<n; i++){
		if(x==a[i]){
			return i+1;
		}
	}
	return -1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		cout<<index(a,n,x)<<endl;
	}
	return 0;
}
