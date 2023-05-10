#include<bits/stdc++.h>
using namespace std;
int t;
string s;

int longest_correct_exp(string s){
	int n = s.length();
	stack<int> stk;
	for(int i=0; i<n; i++){
		if(stk.empty()){
			stk.push(s[i]);
		} else if(s[i]=='('){
			stk.push(s[i]);
		} else {
			if(stk.top()=='('){
				stk.pop();
			} else {
				stk.push(s[i]);
			}
		}
	}
	return n-stk.size();
}

int main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<longest_correct_exp(s)<<endl;
	}
	return 0;
}
