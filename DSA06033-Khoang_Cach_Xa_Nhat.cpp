#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		pair<int, int> a[n];
		for(int i=0; i<n; i++){
			cin>>a[i].first;
			a[i].second = i;
		}
		sort(a, a+n);
		int res = -1;
		for(int i=n-1; i>=0; i--){
			for(int j=0; j<i; j++){
				res = max(res, (a[i].second - a[j].second));
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
