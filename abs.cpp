#include <bits/stdc++.h>
using namespace std;
int x=0,y=0;
int result;
int a[100][100];
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if(i==j){
			x+=a[i][j];
		}
		if(i==n-1-j){
			y+=a[i][j];
		}
	}
}
	cout<<abs(x-y);
	return 0;
}
