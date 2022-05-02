#include<bits/stdc++.h>
using namespace std;
bool check(String s, int k){
	bool A[26];
	int count =0;
	for(char i='a'; i<'z'; i++){
		A[i]=0;
	}
	for(int i =0; i<s.length(); i++){
		A[s[i]]=1;
	}
	for(char i = 'a'; i<'z'; i++){
		if(A[i]==1) count++;
	}
	if(26-count<=k) return 1;
	return 0;
}
int main(){
	int t;
	int k
	String s;
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>s;
		cin>>k;
		cout<<check(s,k)<<endl;
	}
}
