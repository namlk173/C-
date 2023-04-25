#include<bits/stdc++.h>
using namespace std;
#define Max 100
int a[Max][Max], n;
bool is_exist;
string s;

void Try(int i, int j, string s){
	if(i==n-1 && j==n-1) {
		if(a[i][j]==0){
			return;
		} else {
			is_exist = true;
			cout<<s<<" ";
			return;
		}
	}

	if(i<n-1 && a[i+1][j]==1){
		Try(i+1, j, s+"D");
	}
	
	if(j<n-1 && a[i][j+1]==1){
		Try(i, j+1, s+"R");
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>a[i][j];
			}
		}
		if(a[0][0]==0){
			cout<<"-1";
		} else {
			is_exist = false;
			Try(0, 0, "");
			if(!is_exist){
				cout<<"-1";
			}
		}
		cout<<endl;
	}
	return 0;
}
