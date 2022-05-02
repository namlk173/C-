#include<bits/stdc++.h>
using namespace std;
int t;
long long n;
bool check_SNT(long long n){
	if(n<2) return 0;
	if(n==2) return 1;
	long long x = sqrt(n);
	for(int i = 2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
bool check_result(long long n){
	if(check_SNT(n)) return 0;
	long long z= n;
	long long result = 0;
	int i =2;
	while(n!=1){
		while(n%i==0){
			result+=i;
			n=n/i;
		}
		i++;
	}
	if(result + 1 == z) return 1;
	return 0;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<check_result(n)<<endl;
	}
	return 0;
}
