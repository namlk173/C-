#include<bits/stdc++.h>
using namespace std;
int t;
long long n;
long long A[1000000];
bool check(long long n){
	if(n<2) return 0;
	if(n==2) return 1;
	int i =2;
	int x= sqrt(n);
	for(int i = 2; i<= x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void out_result(long long n){
	if(check(n)) cout<<n;
	else{
		int i =2;
		while(n!=1){
			while(n%i==0){
				cout<<i<<" ";
				if(check(n/i)){
					cout<<n/i;
					n= n/(n/i);
				}
				n=n/i;
			}
			i++;
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		out_result(n);
		cout<<endl;
	}
	return 0;
}
