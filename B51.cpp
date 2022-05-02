#include<bits/stdc++.h>
using namespace std;
string s;
int t, k;
bool check(string s, char x){
	for(int i =0; i<s.length(); i++){
		if(x == s[i]) return 1;
	}
	return 0;
}
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		cin>>k;
		int count = 0;
		if(s.length()<26) cout<<"0";
		else{
			for(char i ='a'; i<='z'; i++){
				if(check(s,i)==0) count++;
			}
			if(count<=k){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	return 0;
}
