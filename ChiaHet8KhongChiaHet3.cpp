#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int ChiaHet(string s, int x){
	int n = s.length();
	int count = 0;
	for(int i =0; i<n; i++){
		int	mod = 0;
		for(int j = i; j<n;j++){
			mod = mod*10 + s[j]-'0';
			mod = mod % x;
			if(mod==0){
				count = count+1;
			}
		}
	}
	return count;
}
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<ChiaHet(s,8)- ChiaHet(s,24);
		cout<<endl;
	} 
	return 0;
} 
