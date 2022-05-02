#include<bits/stdc++.h>
using namespace std;
int t;
string a;
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>a;
		int Max =0;
		int count =0;
		int n = a.length();
		for(int i=0;i<n-1;i++) {
			count = 1;
			for(int j =i+1; j<n;j++){
				if(a[i]==a[j]){
					count+=1;
				}
			}
			Max = max(Max,count);	
		}
		if(n%2==0){
			if(Max<=n/2){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		else{
			if(Max <= n/2 +1){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	return 0;
}
