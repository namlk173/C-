#include<bits/stdc++.h>
using namespace std;
int t;
int n, m;
int a[1000000],b[1000000],c[2000000];
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		int x= n+m; 
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		for(int i =0; i<m; i++){
			cin>>b[i];
		}
		for(int i =0; i<n; i++){
			c[i] = a[i];
		}
		for(int i =n; i<x; i++){
			c[i] = b[i-n];
		}		
		
		sort(c,c+x);
		for(int i =0; i<x; i++){
			cout<<c[i]<<" ";
		}
		cout<<endl; 
	}
	return 0;
} 
