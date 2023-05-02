#include<bits/stdc++.h>
using namespace std;
int t;
string a, b;

int Longest_Common_Subsequence(string a, string b){
	int n = a.length(), m = b.length();
	int mark[n+1][m+1]; 
	for(int i=0; i<=n; i++){
		for(int j=0; j<=m; j++){
			if(i==0 || j==0) {
				mark[i][j] = 0;
			} else {
				if(a[i-1]==b[j-1]){
					mark[i][j] = mark[i-1][j-1] + 1;
				} else {
					mark[i][j] = max(mark[i-1][j], mark[i][j-1]);
				}
			}
			
		}
	}
//	for(int i=0; i<=n; i++){
//		for(int j=0; j<=m; j++){
//			cout<<mark[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	return mark[n][m];
}

int main(){
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<Longest_Common_Subsequence(a, b)<<endl;
	}	
	return 0;
}
