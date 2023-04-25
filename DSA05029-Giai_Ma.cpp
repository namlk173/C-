#include<bits/stdc++.h>
using namespace std;

int decode(string number) {
	if(number[0]=='0') {
		return 0;
	}
	int l = number.length(), res=0;
	for(int i=0; i<l-1; i++){
		if(number[i+1]=='0' && (number[i]-'0')>2) {
			return 0;
		}
		if((number[i]-'0')*10 + (number[i+1]-'0') <= 26 && (number[i]-'0')*10 + (number[i+1]-'0') >=10) {
			res = res + 1;
		}
	}
	return res;
}

int main(){
	int t;
	string number;
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>number;
		cout<<decode(number)<<endl;
	}
	return 0;
}
