#include<bits/stdc++.h>
using namespace std;

long long find_max(long long a[], long long n){
	long long max_value = a[0];
	for(int i=1; i<n; i++){
		if(a[i] > max_value) {
			max_value = a[i];
		}
	}
	return max_value;
}

long long find_min(long long a[], long long n){
	long long min_value = a[0];
	for(int i=1; i<n; i++){
		if(a[i] < min_value) {
			min_value = a[i];
		}
	}
	return min_value;
}


int main(){
	int t, n, m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		long long a[n], b[m];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<m; i++){
			cin>>b[i];
		}
		long long max_a = find_max(a, n);
		long long min_b = find_min(b, m);
		long long res = max_a * min_b;
		cout<<res<<endl;
	}
	return 0;
}
