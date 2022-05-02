#include<bits/stdc++.h>
using namespace std;
int t;
int m,n;
bool check(int n){
	if(n<2) return 0;
	if(n==2) return 1;
	int x = sqrt(n);
	for(int i =2; i<=x ;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>m>>n;
		for(int i = m; i<=n; i++){
			if(check(i)) cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
