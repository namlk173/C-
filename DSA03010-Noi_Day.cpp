#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, x;
	cin>>t;
	while(t--){
		priority_queue<int, vector<int>, greater<int> > pq;
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>x;
			pq.push(x);
		}
		long long res = 0;
		while(pq.size()!=1){
			long long x1 = pq.top();
			pq.pop();
			long long x2 = pq.top();
			pq.pop();
			res += x1 + x2;
			pq.push(x1+x2);
		}
		cout<<res<<endl;
	}
	return 0;
}
