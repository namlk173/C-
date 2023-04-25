#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		sort(a, a+n);
		int number1=0, number2=0;
		if(n-k<k) {
			k = n-k;
		}
		for(int i=0; i<n; i++){
			if(i<k) {
				number1 += a[i];
			} else {
				number2 += a[i];
			}
		}
		cout<<number2-number1<<endl;
	}
	return 0;
}
