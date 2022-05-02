#include<bits/stdc++.h>
using namespace std;
int t;
int n,k;
int a[100][100];
int b[10000];
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i =0 ;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		for(int i =0 ;i<n;i++){
			for(int j=0;j<n;j++){
				b[n*i+j] =a[i][j];
			}
		}
		sort(b,b+n*n);
			cout<<b[k-1]<<endl;
		}			
	return 0;
}
