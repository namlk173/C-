#include<bits/stdc++.h>
using namespace std;
int t,n,a[1000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if(n%2==0){
			for(int i =0; i<n/2;i++){
				cout<<a[n-1-i]<<" "<<a[i]<<" ";
			}
		}
		else{
			for(int i =0; i<n/2; i++){
				cout<<a[n-1-i]<<" "<<a[i]<<" ";
			}
			cout<<a[n/2];
		}
		cout<<endl;
	}
	return 0;
}
