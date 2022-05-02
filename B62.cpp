#include<bits/stdc++.h>
using namespace std;
int t;
char x;
int main(){
	cin>>t;
	while(t--){
		cin>>x;
		if(islower(x)){
			cout<<(char)toupper(x)<<endl;
		}
		if(isupper(x)){
			cout<<(char)tolower(x)<<endl;
		}
	}
	return 0;
}
