#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>s;
		int sum =0;
		int count =0;
		int n = s.length();
		for(int i =0 ; i<n; i++){
			if(isdigit(s[i])){
				sum+=s[i]-'0';
				count++;
			}
		}
	for(int i =0; i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(s[i]>s[j]){
				swap(s[i],s[j]);
			}
		}
	}
	for(int i =count; i<n; i++){
		cout<<s[i];
	}
	
	cout<<sum<<endl;
	
	}
	return 0;
}
