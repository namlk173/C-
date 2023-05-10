#include<bits/stdc++.h>
using namespace std;
int t;
string s;

int minimum_change(string s){
	stack<char> stk;
	int n = s.length();
	for(int i=0; i<n; i++){
		if(stk.empty()){
			stk.push(s[i]);
		} 
		else{
			if(s[i]=='('){
				stk.push(s[i]);
			} else{
				if(stk.top()=='('){
					stk.pop();
				} else{
					stk.push(s[i]);
				}
			}
		}
	}
	int open = 0;
	n = stk.size();
	while(!stk.empty() && stk.top()=='('){
		stk.pop();
		open++;
	}
	return n/2 + open%2;
}

int main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<minimum_change(s)<<endl;
	}		
	return 0;
}
