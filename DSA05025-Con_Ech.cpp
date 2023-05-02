#include<bits/stdc++.h>
using namespace std;
int t, n;

long long Count(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 4;
	long long ways[n];
	ways[0] = 1, ways[1] = 2, ways[2] = 4;
	for(int i=3; i<n; i++){
		ways[i] = ways[i-1] + ways[i-2] + ways[i-3];
	}
	return ways[n-1];
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<Count(n)<<endl;
	}	
	return 0;
}
