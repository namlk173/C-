#include<bits/stdc++.h>
using namespace std;
int t,n;
int check(int n){
	int count = 0;
	int difference = 0;
	if(n ==1) return 0;
	int i =2;
	while(n!=1){
		if(n%i==0){
		difference++;
		}
		while(n%i==0){
			n=n/i;
			count++;
		}
		i++;
	}
	if(count == 3 && difference ==3) return 1;
	return 0;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<check(n)<<endl;
	}
	return 0;
}
