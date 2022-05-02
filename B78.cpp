#include<bits/stdc++.h>
using namespace std;
int t;
string s;
vector<string> save_number;
bool check(string s){
	if((s[s.length()-1]-'0')%2==0){
		return 1;
	}
	else{
		 return 0;
	}
}
int main(){
	cin>>t;		
	cin.ignore();
	while(t--){
	
		getline(cin,s);
		istringstream iss(s);
		string word;
		while(iss >> word){
			save_number.push_back(word);
		}
		int n = save_number.size();
		if(n%2==0){
			int count_c =0;
			int count_l =0;
			for(int i =0; i<save_number.size(); i++){
				if(check(save_number[i])==1){
					count_c++;
				}
				else{
					count_l++;
				}
			}
			if(count_c > count_l){
				cout<<"YES";
			}
			else{
				cout<<"NO";
			}
		}
		else{
			int count_c =0;
			int count_l =0;
			for(int i =0; i<save_number.size(); i++){
				if(check(save_number[i])==1){
					count_c++;
				}
				else{
					count_l++;
				}
			}
			if(count_c < count_l){
				cout<<"YES";
			}
			else{
				cout<<"NO";
			}
		}
		save_number.clear();
		cout<<endl;
	}
	return 0;
} 
