#include<bits/stdc++.h>
using namespace std;
//using ll = long long;
string s;
int used[1005]={0};
char x[1005];
void inKq(){
	for(int i=0;i<s.size();i++){
		cout << s[x[i]];
	}
	cout << " ";
}
void Try(int j){
	for(int i=0;i<s.size();i++){
		if(used[i]==0){
			x[j]=i;
			used[i]=1;
			if(j==s.size()-1) inKq();
		    else Try(j+1);
		    used[i]=0;
		}		
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		Try(0);
		cout << endl;
	}
}
