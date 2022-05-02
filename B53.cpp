#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		int mod = 0;
		int n= s.length();
		for(int i =0; i<n; i++){
			if(s[i]=='1'){
				if((n-1-i)%4==0){
					mod+= 1;
				}
				if((n-1-i)%4==1){
					mod+=2;
				}
				if((n-1-i)%4==2){
					mod+= 4;
				}
				if((n-1-i)%4==3){
					mod+=3;
				}				
			}

		}
		if(mod %5 == 0){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
		cout<<endl;
	}
	return 0;
}
