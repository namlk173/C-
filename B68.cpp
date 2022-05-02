#include<bits/stdc++.h>
using namespace std;
long n;
int main(){
	cin>>n;
	if(n<2){
		cout<<"NO";
		return 0;
	}
	if(n==2){
		cout<<"YES";
		return 0;
	}
	int x = sqrt(n);
	for(int i =2; i<=x; i++){
		if(n%i==0){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
