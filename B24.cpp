#include<bits/stdc++.h>
using namespace std;
int t, n;
int a[1000];
bool check(int n){
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
	for(int i= 0; i<=1000; i++){
		if(check(i)) a[i] = i;
	}
	while(t--){
		cin>>n;
		for(int i = 0; i*i<=n; i++){
			if(a[i]!=0){
				cout<<i*i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
