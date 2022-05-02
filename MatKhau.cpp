#include<bits/stdc++.h>
using namespace std;
int n;
string s;
vector<string> damm;
bool compare(string a, string b){
	return a.length() > b.length();
}
int check(string a, string b)
{
	if(a==b){
		return 2;
	}
	for(int i =0; i<a.length()-1; i++){
		string temp ="";
		for(int j=i; j<a.length(); j++){
			if(a[i]==b[0]){
				temp.push_back(a[j]);
					if(temp==b) {
						return 1;
				}	
			}
			else{
				break;
			}
		}
	}
	return 0;
}
int main(){
	cin>>n;
	cin.ignore();
	while(n--){
		getline(cin,s);
		damm.push_back(s);
	}
	sort(damm.begin(),damm.end(),compare);
	for(int i=0;i<damm.size();i++){
		cout<<damm[i]<<" "; 
	}
	
	int count = 0;
	for(int i=0; i<damm.size()-1; i++){
		for(int j =i + 1; j<damm.size(); j++){
			if(check(damm[i], damm[j])==1){
				count+=1;
			}
			else if(check(damm[i], damm[j])==2){
				count+=2;
			}
		}
	}
	cout<<count<<endl;
	return 0;
} 
