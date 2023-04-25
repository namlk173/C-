#include<bits/stdc++.h>
using namespace std;
#define Max 100
int a[Max][Max], n, m, t, ways;

void Try(int i, int j){
	if(i==n-1 && j==m-1){
		ways = ways + 1;
		return;
	}
	if(i<n-1){
		Try(i+1, j);	
	}
	if(j<m-1){
		Try(i, j+1);
	}
}

int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>a[i][j];
			}
		}
		ways=0;
		Try(0, 0);
		cout<<ways<<endl;
	}
	return 0;
}
