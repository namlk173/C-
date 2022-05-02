#include<bits/stdc++.h>
using namespace std;
long long a;
char b[250];
int t;
long long find_mod(long long a, char b[]){
	long long mod = 0;
	for(int i=0;i<strlen(b);i++){
		mod = (mod*10 + b[i]-'0')%a;
	}
	return mod;
}
long long UCLN(long long a, long long b){
	while(a!=0){
		long long x = a;
		a = b%a;
		b = x;
	}
	return b;
}
long long find_UCLN(long long a, char b[]){
	long long num = find_mod(a,b);
	return UCLN(a,num);
}

int main(){
	cin>>t;
	while(t--){
		cin>>a;
		cin>>b;
		if(a==0){
			cout<<b<<endl;
		}
		else{
			cout<<find_UCLN(a,b)<<endl;			
		}

	}
}
