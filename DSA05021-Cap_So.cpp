#include<bits/stdc++.h>
using namespace std;

int t, n;

bool compare(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		pair<int, int> a[n];
		for(int i=0; i<n; i++){
			cin>>a[i].first>>a[i].second;
		}
		sort(a, a+n, compare);
		int res = 0, number_second = 0;
		for(int i=0; i<n; i++){
			if(a[i].first > number_second){
				res = res + 1;
				number_second = a[i].second;
//				cout<<a[i].first<<" "<<a[i].second<<endl;
			} 
		}
		cout<<res<<endl;
	}
	return 0;
}
