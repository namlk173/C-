#include<bits/stdc++.h>
using namespace std;
int t;
string s;
vector<char> v;
bool check_tang(vector<char> s){
	int n = s.size();
	for(int i =0; i<n-1; i++){
		if(s[i]>=s[i+1]){
			return 0;
		}
	}
	return 1;
}
bool check_BangNhau(vector<char> s){
	int n= s.size();
	for(int i =0; i<n-1;i++){
		if(s[i]!=s[i+1]){
			return 0;
		}
	}
	return 1;
}

bool check_locPhat(vector<char> s){
	int n = s.size();
	for(int i =0; i<n; i++){
		if(s[i]!='6'&&s[i]!='8'){
			return 0;
		}
	}
	return 1;
}
bool check_3Dau_2Cuoi(vector<char> s){
	int n = s.size();
	for(int i =0; i<n-3; i++){
		if(s[i]!=s[i+1]){
			return 0;
		}
	}
	for(int i = n-2; i<n-1;i++){
		if(s[i]!=s[i+1]){
			return 0;
		}
	}
	return 1;
}
int main(){	
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,s); 
		int n= s.length();
		for(int i=n-6; i<n; i++){
			if(i==n-3){
				continue;
			}
			else{
			v.push_back(s[i]);
			}
		}
		if(check_tang(v)||check_BangNhau(v)||check_locPhat(v)||check_3Dau_2Cuoi(v)){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		v.clear();
		cout<<endl;
	}
	return 0;
}
