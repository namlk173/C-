#include<bits/stdc++.h>
using namespace std;

long long C(long long k, long long n) {
	if (k == 0 || k == n) return 1;
	if (k == 1) return n;
	return C(k - 1, n - 1) + C(k, n - 1);
}

int main(){
	long long t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long a[n];
		for(long long i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		if(a[0] == a[n-1] && a[0] + a[n-1] == k){
			cout<<C(2, n)<<endl;
		}  else {
			long long res = 0;
			long long left = 0, right = n-1;
			while(left < right) {
				if(a[left] + a[right] == k){
					int left_index = left;
					int right_index = right;
					while(a[left] == a[left_index] && left<right){
						res = res + 1;
						left = left +1;
					}
					if(a[right] == a[right-1]){
						right--;
						left = left_index;
					} else {
						right--;
						left = left_index+1;
					}
				} else if(a[left] + a[right] < k){
					left++;
				} else {
					right--;
				}
			}
			cout<<res<<endl;
		}
	}
	return 0;
}
