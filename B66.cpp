#include<bits/stdc++.h>
using namespace std;
int t;
string s;
bool check(string s){
	int n = s.length();
	for(int i =0; i<n; i++){
		if(s[i]!='8' && s[i]!='6' && s[i]!='0'){
			return 0;
		}
	}
	return 1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		if(check(s)){
		cout<<"YES";	
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}
