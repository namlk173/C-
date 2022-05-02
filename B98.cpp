#include<bits/stdc++.h>
using namespace std;
int t,n,a[100];
int b[20];
int main(){
	cin>>t;
	b[0]=0;
	b[1] = 1;
	for(int i =2; i<20; i++){
		b[i]=b[i-1]+b[i-2];
	}
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		for(int i =0; i<n; i++){
			for(int j = 0; j<20; j++){
				if(a[i]==b[j]){
					cout<<a[i]<<" ";
					break;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
