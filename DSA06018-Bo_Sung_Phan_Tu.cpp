#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		int value = a[0];
		int res = 0, i=0;
		while(i<n){
			if(a[i] == value){
				i = i+1;
				value = value + 1;
			} 
			if(value < a[i]) {
				res = res + 1;
				value = value + 1;
			}
			if(a[i] < value){
				i = i+1;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
