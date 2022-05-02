#include<bits/stdc++.h>
using namespace std;
int t;
long long int result;
long long n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		result = (1+n)*n/2;
		cout<<result<<endl;
	}
	return 0;
}
