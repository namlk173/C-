#include<bits/stdc++.h>
using namespace std;
int t;
string s1,s2;		
vector<string> result;
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,s1);
//		getline(cin,s2);
		istringstream iss(s1);
		string word_in_s1;
		while(iss>>word_in_s1){
			bool flag = 0;
			
			for(int i =0;i<result.size();i++){
				if(word_in_s1 == result[i]){
					flag = 1;
					break;
				}
			}
			if(flag = 0){
				result.push_back(word_in_s1);
			}
		}
		for(int i =0; i<result.size(); i++){
			cout<<result[i]<<" ";
		}
	}
	return 0;
}
