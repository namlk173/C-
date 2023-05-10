#include<bits/stdc++.h>
using namespace std;
long long module = pow(10, 9) + 7;

int main(){
	long long t, n;
	long long x;
	cin>>t;
	while(t--){
		priority_queue<long long, vector<long long>, greater<long long> > pq;
		cin>>n;
		for(long long i=0; i<n; i++){
			cin>>x;
			pq.push(x);
		}
		long long res = 0;
		while(pq.size()!=1){
			long long x1 = pq.top();
			pq.pop();
			long long x2 = pq.top();
			pq.pop();
			long long temp = (x1+x2)%module;
			pq.push(temp);
			res = (res + temp)%module;
		}
		cout<<res<<endl;
	}
	return 0;
}
