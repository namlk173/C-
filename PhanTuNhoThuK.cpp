#include<bits/stdc++.h>
using namespace std;
int t,k,n,a[1000000];
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i =0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<a[k-1]<<endl;
	}
	return 0;
}
