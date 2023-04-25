#include<bits/stdc++.h>
using namespace std;

void sinh_xau_truoc(string s){
	int i = s.length()-1;
	while(i>=0 && s[i]=='0'){
		s[i] = '1';
		i--;
	}
	if(i>=0){
		s[i] = '0';
		for(int j=0; j<s.length(); j++){
			cout<<s[j];
		}
		cout<<endl;
	} else {
		for(int j=0; j<s.length(); j++){
			cout<<"1";
		}
		cout<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		sinh_xau_truoc(s);
	}
	return 0;
}
