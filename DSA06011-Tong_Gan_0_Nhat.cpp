#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b){
	return abs(a) < abs(b);
}
int main(){
	int t, n, a[1000];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n, compare);
		int sum = 0;
		int res = 2*pow(10, 7);
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				sum = a[i] + a[j];
				if(abs(res) > abs(sum)) {
					res = sum;
				}
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
