#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		pair<int, int> a[n];
		set<int> s;
		for(int i=0; i<n; i++){
			cin>>a[i].first;
			a[i].second = i;
			s.insert(a[i].first);
		}
		if(s.size() == n) {
			cout<<"NO";
		} else {
			sort(a, a+n);
			int value = -1;
			int index =  10000000;
			for(int i=0; i<n-1; i++){
				if(a[i].first == a[i+1].first){
					if(index > a[i].second){
						value = a[i].first;
						index = a[i].second;
					}
				}
			}
			cout<<value;
		}
		cout<<endl;
	}
	return 0;
}
