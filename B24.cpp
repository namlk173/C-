#include<bits/stdc++.h>
using namespace std;
int t;
int k,n;
int a[1000][1000];
int c[10000];
int main(){
	cin>>t;
	while(t--){
		cin>>k>>n;
		for(int i =0; i<k; i++){
			for(int j= 0; j<n; j++){
				cin>>a[i][j];
			}
		}
		for(int i =0; i<k; i++){
			for(int j= 0; j<n; j++){
				c[n*i + j] = a[i][j];
			}
		}
		sort(c,c+(n*k));
		for(int i =0; i<n*k; i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
