#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		sort(a, a+n);
		long long number1 = 0, number2 = 0;
		for(int i=0; i<n; i++){
			if(i%2==0) {
				number1 = number1*10 + a[i];
			} else {
				number2 = number2*10 + a[i];
			}
		}
		cout<<number1 + number2<<endl;
	}
	return 0;
}
