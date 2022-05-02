#include<bits/stdc++.h>
using namespace std;
int t, n;
long long a[1000000];
main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		long long sum =-99999999;
		long long best = -9999999999;
		for(int i =0; i<n; i++){
			sum = max(a[i],(a[i]+sum));
			best = max(sum, best);
	}
	cout<<best<<endl;
	}
}
