#include<bits/stdc++.h>
using namespace std;
int t;
char a[20];
int main(){
	cin>>t;
	while(t--){
		cin>>a;
		int n = strlen(a);
		if((a[n-1]- '0') == 6 && (a[n-2]-'0')==8){
			cout<<"1";
		}
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}
