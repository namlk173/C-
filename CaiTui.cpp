#include <bits/stdc++.h>
using namespace std;
int n;
int Max[100][100];
int W;
int v[100];
int w[100];
int main(){
	cin>>n>>W;
	for(int i=1;i<=n;i++){
		cin>>w[i]>>v[i];
	}
	for(int i=0;i<W;i++){
		Max[0][i]=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=W;j++){
			
		Max[i][j]=Max[i-1][j];
		if(w[i]<=j && Max[i-1][j-w[i]] + v[i]> Max[i-1][j]){
			Max[i][j]= Max[i-1][j-w[i]] + v[i];
			
		}
		}
	}
		for(int i=0;i<=n;i++){
		for(int j=0;j<=W;j++){
		cout<<Max[i][j]<<"   ";
		}
		cout<<endl;
		}
	
	return 0;
}
