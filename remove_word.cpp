#include<bits/stdc++.h>
using namespace std;
string str_origin;
string remove_Word;
vector<string> result;
int main(){
	getline(cin,str_origin);
	getline(cin,remove_Word);
	istringstream iss(str_origin);
	string word;
	while(iss >> word){
		if(word == remove_Word){
			result.push_back("");
		}
		else{
			result.push_back(word);
		}
	}
	for(int i =0; i<result.size(); i++){
		cout<<result[i]<<" ";
	}
	return 0;
}
