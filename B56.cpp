#include<bits/stdc++.h>
using namespace std;
int t;
string s;
bool A[10000];
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		int n= s.length();
		for(int i =0; i<n; i++){
			A[i]=0;
		}
		for(int i =0; i<n; i++){
			for(int j = i+1; j<n; j++){
				if(s[i]==s[j]){
					A[i]=1;
					A[j]=1;
				}
			}
		}
		for(int i =0; i<n; i++){
			if(A[i]==0){
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
