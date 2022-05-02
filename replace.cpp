#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	cin>>s;
	cout<<s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '1' && s[i+1] == '0'&& s[i+2]==0){
			s[i] ='';
				s[i+1] ='';
					s[i+2] ='';
		}
	}
	return 0;
}
