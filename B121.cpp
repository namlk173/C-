#include<bits/stdc++.h>
using namespace std;
int t,n,x;
int a[100000];
bool compare_abs(int m, int n){
	return abs(m-x) < abs(n-x);
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,compare_abs);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		
	}
}
