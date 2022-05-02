#include<bits/stdc++.h>
using namespace std;
int t;
char a[1000];
long long b,m;
long long result;
long long find_result(char a[], long long b, long long m){
	int x = strlen(a);
	long long mod = 0;
	for(int i = 0; i < x; i++){
		mod = (mod*10 + (a[i]-'0'))%m;
	}
	result = 1;
	for(int i = 1; i<=b; i++){
		result = result*mod % m;
	}
	return result;
}

int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>m;
		cout<<find_result(a,b,m)<<endl;
	}
	return 0;
}
