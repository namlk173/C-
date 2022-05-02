#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		int n = s.length();
		bool flag = 0;
		for(int i =0;i<n; i++){
			if(s[i]!=s[n-1-i]){
			cout<<"NO";
			flag = 1;
			break;
			}
		}
		if(flag ==0){
			cout<<"YES";
		}
		cout<<endl;
	}
}
