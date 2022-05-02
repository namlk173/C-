#include<bits/stdc++.h>
using namespace std;
int t,n;
bool check(int n){
	int count = 0;
	if(n==0 ||n ==1) return 0;
	int i =2;
	while(n!=1){
		while(n%i==0){
			n/=i;
			count++;
			cout<<i<<" ";
		}
		i++;
	}
	if(count == 3) return 1;
	return 0;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<check(n);
		cout<<endl;
	}
	return 0;
}
