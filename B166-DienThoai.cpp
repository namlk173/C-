#include<bits/stdc++.h>
using namespace std;
int t;
string s;
vector<int> result;
bool check_thuan_nghich(vector<int> a){
	for(int i =0; i<a.size();i++){
		if(a[i]!=a[a.size()-1-i]){
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
	for(int i=0;i<s.length();i++){
		if(tolower(s[i])=='a'||tolower(s[i])=='b'||tolower(s[i])=='c'){
			result.push_back(2);
		}
		else if(tolower(s[i])=='d'||tolower(s[i])=='e'||tolower(s[i])=='f'){
			result.push_back(3);
		}
		else if(tolower(s[i])=='g'||tolower(s[i])=='h'||tolower(s[i])=='i'){
			result.push_back(4);
		}
		else if(tolower(s[i])=='j'||tolower(s[i])=='k'||tolower(s[i])=='l'){
			result.push_back(5);
		}
		else if(tolower(s[i])=='m'||tolower(s[i])=='n'||tolower(s[i])=='o'){
			result.push_back(6);
		}
		else if(tolower(s[i])=='p'||tolower(s[i])=='q'||tolower(s[i])=='r'||tolower(s[i])=='s'){
			result.push_back(7);
		}
		else if(tolower(s[i])=='t'||tolower(s[i])=='u'||tolower(s[i])=='v'){
			result.push_back(8);
		}
		else if(tolower(s[i])=='w'||tolower(s[i])=='x'||tolower(s[i])=='y'||tolower(s[i])=='z'){
			result.push_back(9);
		}
		else{
			continue;
		}	
		}
		if(check_thuan_nghich(result)==1){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
		result.clear();
	}
	return 0;
}
