#include<bits/stdc++.h>
using namespace std;
int t;
int n;
long long k;
bool check(int n, long long k)
{		int mod;
		if(n==0||k==0) return 0;
		if(n==k){
			mod = (0 + k-1)*k/2;
		}
		if(n<k){
			mod = (1+n)*n/2;
		}
		if(n>k){
			int x = n/k;
			int y = n%k;
			mod = ((0 + k-1)*k/2)*x + (1+y)*y/2; 
		}
		return mod == k;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<check(n,k)<<endl;
	}
	return 0;
}
