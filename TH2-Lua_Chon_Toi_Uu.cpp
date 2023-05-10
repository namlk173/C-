#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		pair<int, int> a[n];
		for(int i=0; i<n; i++){
			cin>>a[i].first>>a[i].second;
		}
		sort(a, a+n, compare);
		int time = 0;
		int tasks = 0;
		for(int i=0; i<n; i++){
			if(a[i].first >= time){
				tasks = tasks + 1;
				time = a[i].second;
			}
		}
		cout<<tasks<<endl;
	}
	return 0;
}
