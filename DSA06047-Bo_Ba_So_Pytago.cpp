#include<bits/stdc++.h>
using namespace std;

bool array_has_pytago(long long a[], long long n){
//	for(int i=0; i<n; i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
	for(long long i=0; i<n-2; i++){
		long long e1 = pow(a[i], 2);
		for(long long j=i+1; j<n-1; j++){
			long long e2 = pow(a[j], 2);
				long long left = j+1, right = n-1;
				while(left<right){
					long long mid = (right + left)/2;
					long long e3 = pow(a[mid], 2);
					if(e1 + e2 == e3) return true;
					else if(e1 + e2 > e3) {
						left = mid + 1;
					} else {
						right = mid - 1;
					}
				}
		}
	}
	return false;
}

int main(){
	long long t, n;
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		for(long long i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		if(array_has_pytago(a, n)) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
