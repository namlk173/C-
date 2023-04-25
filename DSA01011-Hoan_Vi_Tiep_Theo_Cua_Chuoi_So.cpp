#include<bits/stdc++.h>
using namespace std;
int t, stt;
string s;

int main(){
	cin>>t;
	while(t--){
		cin>>stt;
		cin>>s;
		int a[s.length()];
		for(int i=0; i<s.length(); i++){
			a[i] = s[i] - '0';
		}
		bool not_biggest = next_permutation(a, a+s.length());
		cout<<stt<<" ";
		if(not_biggest){
			for(int i=0; i<s.length(); i++){
				cout<<a[i];
			}			
		} else{
			cout<<"BIGGEST";
		}
		cout<<endl;
	}
	return 0;
}
