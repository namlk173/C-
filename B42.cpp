#include<bits/stdc++.h>
using namespace std;
int t,n,a[10000000];
bool check(int a[], int n){
	for(int i =0; i<n; i++){
		if(a[i]!=a[0]) return 1;
	}
	return 0;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if(check(a,n)) {
			cout<<a[0]<<" ";
			for(int i = 1; i<n ; i++){
				if(a[i]!=a[0]) {
					cout<<a[i]<<endl;
					break;
				}
			}
		}
		else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
