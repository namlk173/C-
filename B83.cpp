#include<bits/stdc++.h>
using namespace std;
string s;
vector<char> char_not_nguyen_am;
int main(){
	cin>>s;
	for(int i =0; i<s.length(); i++){
		s[i] = tolower(s[i]);
		if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='u'&&s[i]!='o'&&s[i]!='y'){
			char_not_nguyen_am.push_back(s[i]);
		}
	}
	for(int i =0;i<char_not_nguyen_am.size();i++){
		cout<<"."<<char_not_nguyen_am[i];
	}
	return 0;
}
