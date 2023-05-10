#include<bits/stdc++.h>
using namespace std;
int t;
string s;

string check(string exp){
	stack<char> stk;
	int n = exp.length();
	for(int i=0; i<n; i++){
		if(exp[i]==')'){
			bool flag = true;
			char top = stk.top();
			stk.pop();
			while(!stk.empty() && top!='('){
				if(top=='+' || top=='-' || top=='*'|| top=='/'){
					flag = false;
				}
				top = stk.top();
				stk.pop();
			}
			if(flag){
				return "Yes";
			}
		} else {
			stk.push(exp[i]);
		}
	}
	return "No";
}

int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin, s);
		cout<<check(s)<<endl;
	}
	return 0;
}
