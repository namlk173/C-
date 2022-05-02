#include<bits/stdc++.h>
using namespace std;
int t;
long long int n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		long long int sum =1;
		for(int i=2; i*i<=n; i++){
			if(n%i==0){
				if(i*i !=n){
					sum+=i + n/i;
				}
				else{
					sum+=i;
				}
			}
		}
		if(sum==n){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
} 
