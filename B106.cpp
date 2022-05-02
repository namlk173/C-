#include<bits/stdc++.h>
using namespace std;
int t;
int n;
long long a[10000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n;i++){
			cin>>a[i];
		}
		cout<<a[0]*a[1]<<" ";
		for(int i = 1; i<n-1;i++){
			cout<<a[i-1]* a[i+1]<<" ";
		}
		cout<<a[n-1]*a[n-2];
		cout<<endl;
	}
	return 0;
}
