#include<bits/stdc++.h>
using namespace std;
int t;
long long a,b;
long long GCD(long long a, long long b){
	while(a!=0){
		long long temp = a;
		a = b%a;
		b = temp; 
	}
	return b;
}
long long LCM(long long a, long long b){
	return a/GCD(a,b)*b;
}
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<LCM(a,b)<<" "<<GCD(a,b);
		cout<<endl;
	}
	return 0;
}
