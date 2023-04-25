#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	long long n, value;
	cin>>t;
	while(t--){
		cin>>n>>value;
		long long a[n];
		for(long long i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		long long res = 0;
		for(long long i=0; i<n-2; i++){
			long long left = i+1, right = n-1;
			while(left<right){
				if(a[i] + a[left] + a[right] < value){
					res = res + (right-left);
					left++;
				} else{ 
					right--;
				}
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
