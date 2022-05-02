#include<bits/stdc++.h>
using namespace std;
int t;
long long n;
long long result;
long long GCD(long long a, long long b){
	long long temp;
	while(a!=0){
		temp = a;
		a= b%a;
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
		cin>>n;
		result = 1;
		for(int i = 1; i<=n; i++){
			result = LCM(i,result);
 		}
 		cout<<result<<endl;	
	}
	return 0;
}
