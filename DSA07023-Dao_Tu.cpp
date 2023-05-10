#include<bits/stdc++.h>
using namespace std;
int t;
string s;

void reverse_word(string s){
	stack<string> stk;
	istringstream iss(s);
	string word;
	while(iss>>word){
		stk.push(word);
	}
	while(!stk.empty()){
		cout<<stk.top()<<" ";
		stk.pop();
	}
	cout<<endl;
	return;
}

int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin, s);
		reverse_word(s);
	}
	return 0;
} 
