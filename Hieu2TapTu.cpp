#include<bits/stdc++.h>
using namespace std;
string s1, s2;
int t;
vector<string> v1,v2;
bool check_exits(vector<string> s, string word){
	for(int i =0; i<s.size();i++){
		if(word == s[i]){		
		return 1;	
		}
	}
	return 0;
}
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,s1);
		getline(cin,s2);
		istringstream iss1(s1);
		istringstream iss2(s2);
		string word;	
		while(iss2>>word){
			v2.push_back(word);
		}
		while(iss1>>word){
			if(check_exits(v1,word)||check_exits(v2,word)){
				continue;
			}
			else{
				v1.push_back(word);
			}
		}
		sort(v1.begin(),v1.end());
		for(int i =0; i<v1.size();i++){
			cout<<v1[i]<<" ";
		}
		v1.clear();
		v2.clear();
		cout<<endl;
	}
	return 0;
}
