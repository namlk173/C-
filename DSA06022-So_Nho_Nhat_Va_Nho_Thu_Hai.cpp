#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, x;
	cin>>t;
	while(t--){
		cin>>n;
		set<int> s;
		for(int i=0; i<n; i++){
			cin>>x;
			s.insert(x);
		}
		if(s.size()<2) {
			cout<<"-1";
		} else {
			set<int>::iterator itr = s.begin();
			cout<<*itr<<" ";
			itr++;
			cout<<*itr;
		}
		cout<<endl;
	}
	return 0;
}
