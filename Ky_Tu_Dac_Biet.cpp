#include<bits/stdc++.h>
using namespace std;

char ki_tu_dac_biet(string s, long long n){
	long long l = s.length();
	if(l > n) return s[n-1];
	string temp = s;
	s = s + temp[temp.length()-1];
	for(long long i=0; i<temp.length()-1; i++){
		s = s + s[i];
	}
//	cout<<s<<endl;
	return ki_tu_dac_biet(s, n);
}

int main(){
    long long t, n;
    string s;
	cin>>t;
	while(t--){
		cin>>s;
		cin>>n;
		cout<<ki_tu_dac_biet(s, n)<<endl;
	}
	return 0;
}
