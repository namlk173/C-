#include<bits/stdc++.h>
using namespace std;
int t;
string s;

int longest_correct_exp(string s){
	int n = s.length();
	stack<int> stk;
	stk.push(-1);
	int res = 0;
	for(int i=0; i<n; i++){
		if(s[i]=='('){
			stk.push(i);
		} else{
			if(stk.top()==-1){
				stk.push(i);
			} else{
				if(s[stk.top()]==')'){
					stk.push(i);
				} else{
					stk.pop();
					res = max(res, i-stk.top());
				}
			}
		}
	}
	return res;
}

int main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<longest_correct_exp(s)<<endl;
	}
	return 0;
}
