#include<bits/stdc++.h>
using namespace std;

void sinh_ke_tiep(string s){
	int n = s.length();
	int i=n-1;
	while(i>=0 && s[i]=='1'){
		s[i] = '0';
		i--;
	}
	if(i>=0){
		s[i] = '1';
		for(int i=0; i<n; i++){
			cout<<s[i];
		}
	} else {
		for(int i=0; i<n; i++){
			cout<<"0";
		}	
	}
	cout<<endl;
	return;
}

int main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		sinh_ke_tiep(s);
	}	
	return 0;
}
