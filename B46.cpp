#include<bits/stdc++.h>
using namespace std;
int t,n;
bool check(int n){	
	if(n<2) return 0;
	if(n==2) return 1;
	int x= sqrt(n);
	for(int i = 2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		bool flag = 0;
		for(int i = 0; i<=n/2; i++){
			if(check(i)&&check(n-i)){
				flag = 1;
				cout<<i<<" "<< n-i;
				break;
			}
		}
		if(!flag) {
		cout<<"-1";
		}	
		cout<<endl;
	}
	return 0;
} 
