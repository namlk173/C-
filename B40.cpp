#include<bits/stdc++.h>
using namespace std;
int t;
int n, a[10000000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n-1; i++){
			cin>>a[i];
		}
//		sort(a,a+n-1);
		for(int i =0; i<n; i++){
			if (a[i]!= i+1){
				cout<< i+1;
				break;
			}
		}
		cout<<endl;
	}
	return 0;
} 
