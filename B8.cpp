#include<bits/stdc++.h>
using namespace std;
int t;
int n;
bool check(int n) {
	if(n<2) return 0;
	if(n==2) return 1;
	int x =sqrt(n);
	for(int i =2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i = 0; i<= n/2; i++){
			if(check(i)&&check(n-i)){
				cout<<i<<" "<<n-i;
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}
