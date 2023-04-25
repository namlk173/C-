#include<bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pi;

int main(){
	int t, n; 
	long long a, b;
	cin>>t;
	while(t--){
		cin>>n;
		long long res=0;
		priority_queue<pi, vector<pi>, greater<pi> > pq;
		for(int i=0; i<n; i++){
			cin>>a>>b;
			pq.push(make_pair(a, b));
		}
		if(pq.size()==2){
			long long value1 = pq.top().first;
			long long price1 = pq.top().second;
			pq.pop();
			long long value2 = pq.top().first;
			long long price2 = pq.top().second;
			if(value1==value2){
			  	res = min(value1, value2);
			} 
		} else {
			while(pq.size() >= 2){
				long long value1 = pq.top().first;
				long long price1 = pq.top().second;
				pq.pop();
				long long value2 = pq.top().first;
				long long price2 = pq.top().second;
				pq.pop();
				long long value3 = pq.top().first;
				long long price3 = pq.top().second;
				if(value1 == value2 ) {
					if(value2 == value3){
						res = res + price1 + price2;
						pq.push(make_pair(value1+1, price1));
						pq.push(make_pair(value2-1, price2));
					} else {
						res = res + price1;
						pq.push(make_pair(value1+1, price1));
						pq.push(make_pair(value2, price2));
					}
				} else {
					if(value2==value3){
						res = res + price2;
					}
				}
			}
		}
		
		cout<<res<<endl;
	}
	return 0;
}
