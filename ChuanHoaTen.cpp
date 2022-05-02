#include<bits/stdc++.h>
using namespace std;


void chuanHoa(string s){
	vector<string> result;
	istringstream iss(s);
	string  word;
	while(iss>>word){
		string temp;
		temp.push_back(toupper(word[0]));
		for(int i =1; i<word.length(); i++){
			temp.push_back(tolower(word[i]));
		}
		result.push_back(temp);
	}
	for(int i =0; i<result.back().length(); i++){
		result.back()[i] = toupper(result.back()[i]);
	}
	for(int i =0; i< result.size(); i++){
		if(i==result.size()-2){
			cout<<result[i]<<", ";
		}
		else{
			cout<<result[i]<<" ";
		}
	}
}
int main(){
string s;
	getline(cin,s);
	chuanHoa(s);
	return 0;
}
