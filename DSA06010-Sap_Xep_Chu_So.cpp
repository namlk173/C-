#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t, n;
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int mark[10];
		for(int i=0; i<10; i++){
			mark[i] = 0;
		}
		for(int i=0; i<n; i++){
			while(a[i]!=0){
				int v = a[i] % 10;
				mark[v] = 1;
				a[i] = a[i]/10;
			}
		}		
		for(int i=0; i<10; i++){
			if(mark[i] == 1){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
