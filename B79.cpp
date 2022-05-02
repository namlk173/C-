#include<bits/stdc++.h>
using namespace std;
int t;
int n, a[100];
int b[100];
int main(){
		cin>>n;	
		for(int i =0; i<n;i++){
			b[i]=0;
		}	
		for(int i =0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i =0; i<n;i++){
			if(a[i]==a[i+1]){
				b[i+1]=1;
			}
		}
		for(int i =0; i<n;i++){
			if(b[i]==0){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;		
	return 0;
}
