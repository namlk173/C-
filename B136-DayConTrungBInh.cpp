#include<bits/stdc++.h>
using namespace std;
int t;
int n, k, a[100000];
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i =0 ;i<n; i++){
			cin>>a[i];
		}
		int index = -1;
		long long  best = -9999999999;
		for(int i =0; i<n-k+1; i++){
			long long sum = 0;
			for(int j =i; j<i+k; j++){
				sum = (sum + a[j]);
				}
			if(sum > best){
				best = sum;
				index = i;
			}
		}
		for(int i = index; i< index+k; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
