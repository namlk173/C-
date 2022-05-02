#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		int n = s.length();
		int mod=0;
		for(int i = 0; i<n; i++){
			mod= (mod*10 + s[i]-'0')%11;
		}
		if(mod % 11 ==0) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}

