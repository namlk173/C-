#include<bits/stdc++.h>
using namespace std;
int t;
long long int a,b,c;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		long long int x = a%c;
		long long int y = b%c;
		long long int z = a*b % c;
		cout<<z;
		
}
	return 0;
}
