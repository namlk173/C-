#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	if(j<n-1-i)	cout<<" ";
	else cout<<"#";
	}
	cout<<endl;
}
	return 0;
}
