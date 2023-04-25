#include<bits/stdc++.h>
using namespace std;

long long find_max(long long a[], int left, int right){
	long long max_value = a[left];
	for(int i=left; i<right; i++){
		if(max_value < a[i]) max_value = a[i];
	}
	return max_value;
}

int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<=n-k; i++){
			long long max_value = find_max(a, i, i+k);
			cout<<max_value<<" ";
		}
		cout<<endl;
	}
	return  0;
}
