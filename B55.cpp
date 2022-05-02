#include<bits/stdc++.h>
using namespace std;
string s;
int t;
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,s);
		int count =0;
		int n = s.length();
		for(int i =0; i<n-1; i++){
			for(int j =i+1; j<n; j++){
				if(s[i]==s[j]){
					count++;
				}
			}
		}
		count+=n;
		cout<<count<<endl;
	}
	return 0;
}
