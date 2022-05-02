#include<bits/stdc++.h>
using namespace std;
int t;
string s;
vector<string> v;
vector<string> r;
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,s);
		istringstream iss(s);
		string word;
		while(iss>>word){
			for(int i =0; i<word.length();i++){
				word[i] = tolower(word[i]);
			}
			v.push_back(word);
		}
		string temp = v.back();
		for(int i = 0; i<v.size()-1; i++){
			temp = temp + v[i][0];
		}
		r.push_back(temp);
		v.clear();
	}
	for(int i =0; i<r.size(); i++){
		int index =0;
		for(int j =0; j<i; j++){
			if(r[i]==r[j]){
				index = index +1;
			}
		}
		if(index == 0){
			cout<<r[i]<<"@ptit.edu.vn"<<endl;
		}
		else{
			cout<<r[i]<<index+1<<"@ptit.edu.vn"<<endl;
		}
	}
	return 0;
}
