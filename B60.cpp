#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int sum_of_number(int n){
	int x= 0;
	while(n!=0){
		x+=n%10;
		n=n/10;
	}
	return x;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int result = 0;
		while(n>9){
			result = sum_of_number(n);
			n = result;
		}
		cout<<result<<endl;
	}
	return 0;
}
