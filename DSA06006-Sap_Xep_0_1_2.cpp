#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, x;
	cin>>t;
	while(t--){
		cin>>n;
		priority_queue<int, vector<int>, greater<int> > pq;
		for(int i=0; i<n; i++){
			cin>>x;
			pq.push(x);
		}
		while(!pq.empty()){
			cout<<pq.top()<<" ";
			pq.pop();
		}
		cout<<endl;
	}
	return 0;
}
