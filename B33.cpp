#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int t;
ll M;
char N[1000];
ll find_result(char N[], ll M){
	int x = strlen(N);
	ll mod = 0;
	for(int i = 0; i<x;i++){
		mod = (mod*10 + N[i]-'0')%M;
	}
	return mod;
}
int main(){
	cin>>t;
	while(t--){
		cin>>N;
		cin>>M;
		cout<<find_result(N,M);
	}
	return 0;
}
