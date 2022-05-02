#include<bits/stdc++.h>
using namespace std;
int t;
int n, a[1001];
#define m  1000000007; 
int main(){
	a[0]=0;
	a[1]=1;
	for(int i =2;i<1001; i++){
		a[i] = (a[i-1]+a[i-2])%m;
	}
	cin>>t;
	while(t--){
		cin>>n;
		cout<<a[n]<<endl;
	}
	return 0;
}
