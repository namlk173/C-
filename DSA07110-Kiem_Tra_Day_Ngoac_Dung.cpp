#include<bits/stdc++.h>
using namespace std;
int t;
string s;

string check(string s){
	int n = s.length();
	stack<char> stk;
	if(n==0){
		return "YES";
	}
	stk.push(s[0]);
	for(int i=1; i<n; i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
			stk.push(s[i]);
		} else {
			if((!stk.empty()) && ((s[i]==']' && stk.top()=='[') || (s[i]==')' && stk.top()=='(') || (s[i]=='}' && stk.top()=='{'))){
				stk.pop();
			}
			else{
				return "NO";
			}
		}
	}
	if(stk.size()>0) return "NO";
	return "YES";
}

int main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<check(s)<<endl;
	}
	return 0;
}
