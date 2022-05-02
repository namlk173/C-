#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int a[100000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0;i<n;i++){
			cin>>a[i];
		}
		long long in= a[0];
		long long ex = 0;
		long long new_ex = 0;
		for(int i =1; i<n; i++){
			new_ex = max(in,ex);
			in = ex + a[i];
			ex = new_ex;
		}
		long long result = max(in,ex);
		cout<<result;
	}
	return 0;
}
