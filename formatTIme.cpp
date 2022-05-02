#include<bits/stdc++.h>
using namespace std;
string s;
int h;
int m;
int sc;
//12:12:30AM
int main(){
	getline(cin,s);
	h = (s[0]-'0')*10 + (s[1]-'0');
	if(h>=12&&(s[8]=='A'||s[8]=='a')){
		h=h-12;
	}
	if(h<12&&(s[8]=='p'||s[8]=='P'))
	{
		h=h+12;
	}
if(h<10) cout<<0<<h<<":"<<s[3]<<s[4]<<":"<<s[6]<<s[7];
else cout<<h<<":"<<s[3]<<s[4]<<":"<<s[6]<<s[7];
	return 0;
}
