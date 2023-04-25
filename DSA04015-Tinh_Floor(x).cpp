#include<bits/stdc++.h>
using namespace std;

long long floor(long long a[], long long n, long long x){
	long long left = 0, right = n-1;
	while(left<=right){
		long long mid = left + (right-left)/2;
		if(a[mid]>x) {
			right = mid-1;
		} else if(a[mid]==x) {
			return mid+1;
		} else {
			left = mid+1;
		}
	}
	if (left!=0){
		return left;
	}
	return -1;
}

int main(){
	long long t, n, x;
	cin>>t;
	while(t--){
		cin>>n>>x;
		long long a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		cout<<floor(a, n, x)<<endl;
	}
	return 0;
}
