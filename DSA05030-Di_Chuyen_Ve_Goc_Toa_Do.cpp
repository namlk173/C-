#include<bits/stdc++.h>
using namespace std;
int t, n, m;

int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		long long a[n+1][m+1];
		for(int i=n; i>=0; i--){
			a[i][m] = 1;
		}
		for(int i=m; i>=0; i--){
			a[n][i] = 1;
		}

		for(int i=n-1; i>=0; i--){
			for(int j=m-1; j>=0; j--){
				a[i][j] = a[i+1][j] + a[i][j+1];
			}
		}
//		for(int i=0; i<=n; i++){
//			for(int j=0; j<=m; j++){
//				cout<<a[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		cout<<a[0][0]<<endl;
	}
	return 0;
}
