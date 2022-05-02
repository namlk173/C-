#include<bits/stdc++.h>
using namespace std;
int t;
int code;
char s[15];
char a[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
char b[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
int main(){
	cin>>t;
	while(t--){
		cin>>code;
		for(int i =0; i<15; i++){
			cin>>s[i];
		}
		double point = 0;
		if(code == 101){
			for(int i =0; i<15; i++){
				if(s[i]==a[i]){
					point+=(double) 1/15;
				}
			}
		}
		if(code == 102){
			for(int i =0; i<15; i++){
				if(s[i]==b[i]){
					point+=(double) 1/15;
				}
			}
		}
		cout<<fixed<<setprecision(2)<<point*10<<endl;
	}
	return 0;
}
