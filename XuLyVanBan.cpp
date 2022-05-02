#include<bits/stdc++.h>
using namespace std;
string word;
vector<string> result;
int main(){
	string s = "";
	string line;
	while(getline(cin,line)){
		if(line==""){
			break;
		}
		s += line;
	}
	istringstream iss(s);
	string word;
	while(iss>>word){
		for(int i =0;i<word.length();i++){
			word[i] = tolower(word[i]);
		}
		if(word[word.length()-1]!='.'&&word[word.length()-1]!='?'&&word[word.length()-1]!='!'){
			result.push_back(word);
		}
		else{
			if(word.length()>1){
				string temp = "";
				for(int i =0; i<word.length()-1;i++){
				temp = temp + word[i];
				}
				result.push_back(temp);
			}
			result[0][0] = toupper(result[0][0]);
			for(int i =0;i<result.size()-1;i++){
				cout<<result[i]<<" ";
			}
			cout<<result.back();
			cout<<endl;
			result.clear();
		}
	}
	return 0;
}
