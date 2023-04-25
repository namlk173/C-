#include<bits/stdc++.h>
using namespace std;

void min_max(string s1, string s2){
	int mi1=0, mi2=0, ma1=0, ma2=0;
	for(int i=0; i<s1.length(); i++){
		if(s1[i]=='6'){
			mi1 = mi1*10 + 5;
			ma1 = ma1*10 + 6;
		} 
		else if(s1[i]=='5'){
			mi1 = mi1*10 + 5;
			ma1 = ma1*10 + 6;
		}
		 else {
			mi1 = mi1*10 + (s1[i]-'0');
			ma1 = ma1*10 + (s1[i]-'0');
		}	
	}
	
	for(int i=0; i<s2.length(); i++){
		if(s2[i]=='6'){
			mi2 = mi2*10 + 5;
			ma2 = ma2*10 + 6;
		} 
		else if(s2[i]=='5'){
			mi2 = mi2*10 + 5;
			ma2 = ma2*10 + 6;
		}
		 else {
			mi2 = mi2*10 + (s2[i]-'0');
			ma2 = ma2*10 + (s2[i]-'0');
		}	
	}
	
	cout<<mi1+mi2<<" "<<ma1+ma2<<endl;
	return;
}

int main() {
	string s1, s2;
	cin>>s1>>s2;
	min_max(s1, s2);
	return 0;
}
