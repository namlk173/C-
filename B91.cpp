#include<bits/stdc++.h>
using namespace std;
int t;
char s[1000];
long long m;
int main(){
	cin>>t;
	while(t--){
		cin>>s>>m;
		long long mod = 0;
		for(int i =0; i<strlen(s); i++){
			mod= (mod*10 + (s[i]-'0'))%m;
		}
		cout<<mod<<endl;
	}
	return 0;
}
