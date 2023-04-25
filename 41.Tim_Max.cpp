#include<bits/stdc++.h>
using namespace std;
const long long modulo = pow(10, 9) + 7;
int main(){
	long long t, n;
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		long long res = 0;
		for(int i=0; i<n; i++) {
			res = res % modulo;
			res = (res + (a[i] * i))%modulo;
		}
		cout<<res<<endl;
	}
	return 0;
}
