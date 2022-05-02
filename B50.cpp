#include<bits/stdc++.h>
using namespace std;
int t;
int n,m;
int a[100][100];
int x[100], y[100];
void check(int a[100][100], int n, int m, int x[], int y[]){
	for(int i =0; i<n; i++){
		x[i]=0;
	}
	for(int i =0; i<m; i++){
		y[i]=0;
	}
	for(int i =0; i<n;i++){
		for(int j =0; j<m; j++){
			if(a[i][j]==1){
				x[i] = 1;
				y[j] = 1;
			}
		}
	}	
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i =0; i<n; i++){
			for(int j= 0; j<m; j++){
				cin>>a[i][j];
			}
		}
		check(a,n,m,x,y);
		for(int i =0; i<n; i++){
			if(x[i]==1){
				for(int j =0; j<m; j++){
				a[i][j] =1;
				}
			}
		}
		for(int i= 0;i<m; i++){
			if(y[i]==1){
			for(int j= 0;j<n; j++){
			a[j][i]=1;
			}
			}
		}
		for(int i =0; i<n; i++){
			for(int j= 0; j<m; j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
} 
