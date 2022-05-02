#include<bits/stdc++.h>
using namespace std;
int t;
int n, l , r ,q;
int a[1000];
int main(){
	cin>>t;
	while(t--){
		cin>>n>>q;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		while(q--){
			cin>>l>>r;
			int sum = 0;
			for(int i = l-1; i<r; i++){
				sum+=a[i];
			}
			cout<<sum<<endl;
		}
	}
	return 0;
} 
