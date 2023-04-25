#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int b[n];
		for(int i=0; i<n; i++){
		 	b[i] = a[i];
		}
		sort(a, a+n);
		for(int i=0; i<n; i++){
			if(a[i] != b[i]){
				cout<<i+1<<" ";
				break;
			}
		}
		for(int j=n-1; j>=0; j--){
			if(a[j] != b[j]){
				cout<<j+1<<" ";
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}


