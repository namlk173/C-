#include<bits/stdc++.h>
using namespace std;
void chuanHoa(string s){	
	vector<string> result;
	string word;
	istringstream iss(s);
	while( iss >> word){
		result.push_back(word);
	}
	for(int i =0; i < result[result.size()-1].length();i++){
		char temp = tolower(result[result.size()-1][i]);
		cout<<temp;
	}
	for(int i =0; i< result.size()-1; i++){
		char temp = tolower(result[i][0]);
		cout<<temp;
	}
	cout<<"@ptit.edu.vn";
}
int main(){
	string fullName;
	getline(cin,fullName);
	chuanHoa(fullName);
	return 0;
}
