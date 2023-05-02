#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long x;
	vector<long long> index_odd, index_even;
	for(int i=0; i<n; i++){
		cin>>x;
		if(i%2==0){
			index_odd.push_back(x);
		} else{
			index_even.push_back(x);
		}
	}
	sort(index_odd.begin(), index_odd.end());
	sort(index_even.begin(), index_even.end(), greater<int>());
	int u=0, v=0;
	while(u<index_odd.size() || v<index_even.size()){
		if(u<index_odd.size()){
			cout<<index_odd[u++]<<" ";
		}
		if(v<index_even.size()){
			cout<<index_even[v++]<<" ";
		}
	}
	return 0;
}
