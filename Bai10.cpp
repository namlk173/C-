#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int x = sqrt(n);
		int res = 0;
		if (n%2==0) {
			res = res + 1;
		}
		for(int i=2; i<=x; i+=2){
			if (n%i==0){
				res = res + 1;
				if((n/i)%2==0 && (n/i) != i){
					res = res + 1;
				}
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
