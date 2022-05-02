#include<bits/stdc++.h>
using namespace std;
int n,t,a[100000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		for(int i =0; i<n-1; i++){
			if(a[i]==a[i+1]&&a[i+1]!=0){
				a[i]=a[i]*2;
				a[i+1] =0;
			}
		}
		int count = 0;
		for(int i =0; i<n; i++){
		if(a[i]!=0){
			count++;
			cout<<a[i]<<" ";
			}
		}
		if(count!=0){
		for(int i = count; i<n; i++){
			cout<<"0"<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
