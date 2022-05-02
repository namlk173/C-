#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		int n =s.length();
		for(int i =0; i<n; i++){
			if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4'){
				i=i+2;
				continue;
			}
			else{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
