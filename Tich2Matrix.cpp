#include<bits/stdc++.h>
using namespace std;
int n,m,p;
int a[50][50],b[50][50],result[50][50];
int main(){
	cin>>n>>m>>p;
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i =0;i<m;i++){
		for(int j =0;j<p;j++){
			cin>>b[i][j];
		}
	}
	for(int i =0; i<n; i++){
		for(int j =0; j<p; j++){
			for(int k=0;k<m;k++){
				result[i][j]+= a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
