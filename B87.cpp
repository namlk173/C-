#include<bits/stdc++.h>
using namespace std;
int t;
long long n;
long long a[1000000];
bool check(long long n){
	if(n<2) return 0;
	if (n==2) return 1;
	int x =sqrt(n);
	for(int i = 2; i <= x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	cin>>t;
	for(long long i= 0; i<1000000; i++){
		if(check(i)) a[i] = i;
	}
	while(t--){
		cin>>n;
		int count = 0;
		for(long long i = 0; i*i<=n; i++){
			if(a[i]!=0){
			count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
