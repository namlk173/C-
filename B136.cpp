#include<bits/stdc++.h>
using namespace std;
int t;
long long int x10, x20;
char s1[19],s2[19];
long long int x11, x21;
int main(){
	cin>>t;
	while(t--){
		cin>>s1>>s2;
		int n = strlen(s1);
		int m = strlen(s2);
		x10= 0;
		x20 = 0;
		x11= 0;
		x21= 0;
		for(int i =0; i<n; i++){
			if(s1[i]=='6'){
				x10 = x10*10 + 5; 
			}
			else{
				x10 = x10*10+ (s1[i]-'0');
			}
		}
		for(int i =0; i<m; i++){
			if(s2[i]=='6'){
				x20 = x20*10 + 5; 
			}
			else{
				x20 = x20*10+ (s2[i]-'0');
			}
		}
		cout<<x10+x20<<" ";
		
			for(int i =0; i<n; i++){
			if(s1[i]=='5'){
				x11 = x11*10 + 6; 
			}
			else{
				x11 = x11*10+ (s1[i]-'0');
			}
		}
		for(int i =0; i<m; i++){
			if(s2[i]=='5'){
				x21 = x21*10 + 6; 
			}
			else{
				x21 = x21*10+ (s2[i]-'0');
			}
		}
		cout<<x11 + x21<<endl;
	}
	return 0;
}
