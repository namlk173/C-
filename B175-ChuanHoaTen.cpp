#include<bits/stdc++.h>
using namespace std;
int t;
int the_way_write;
string Name;
vector<string> result;
int main(){
	cin>>t;
	while(t--){
		cin>>the_way_write;
		cin.ignore();
		getline(cin,Name);
		istringstream iss(Name);
		string word_in_Name;
		while(iss>>word_in_Name){
			for(int i =0;i<word_in_Name.length();i++){
				word_in_Name[i] = tolower(word_in_Name[i]);
			}
			result.push_back(word_in_Name);
		}
		for(int i =0; i<result.size();i++){
			result[i][0]= toupper(result[i][0]);
		}
		if(the_way_write==1){
			cout<<result.back()<<" ";
			for(int i =0; i<result.size()-1;i++){
				cout<<result[i]<<" ";
			}
		}
		if(the_way_write==2){
			for(int i =1; i<result.size();i++){
				cout<<result[i]<<" ";
			}
			cout<<result.front();
		}
		result.clear();
		cout<<endl;
		
	}
	return 0;
}
