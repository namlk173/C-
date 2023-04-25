#include<bits/stdc++.h>
using namespace std;

bool contain(vector<int> v, int index){
	for(int i=0; i<v.size(); i++){
		if(index==v[i]){
			return true;
		}
	}
	return false;
}

void process(string s){
	vector<int> index;
	int value = 0;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='('){
			index.push_back(i);
			value++;
		} else if(s[i]==')'){
			if(value > 0){
				index.pop_back();
				value--;
			} else{ 
				index.push_back(i);
			}
		}
	}
	for(int i=0; i<s.length(); i++){
		if(contain(index, i)){
			cout<<"-1";
		}
		else{
			if(s[i]=='('){
				cout<<"0";
			} else if(s[i]==')'){
				cout<<"1";
			} else {
				cout<<s[i];
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		process(s);
		cout<<endl;
	}
	return 0;
}
