#include<bits/stdc++.h>
using namespace std;
int t,n;
long k;
int main(){
	cin>>t;
	while(t--){
		int s = 0;
		cin>>n>>k;
		int div = n/k;
		int mod = n%k;
		if(n<k){
			s = (1+n)*n/2;
		}
		else if(n==k){
			s = (0 + n-1) *n/2;
		}
		else if(n>k){
			s = div*((0 + k-1)*k/2) + (1 + mod)*mod/2; 
		}
		cout<<s;
		cout<<endl;
	}
	return 0;
}
