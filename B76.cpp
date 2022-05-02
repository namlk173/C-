#include<bits/stdc++.h>
using namespace std;
int t, n, a[10000000];
int b[1000000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int sum =0;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		for(int i =0; i<n; i++){
			b[i] =0;
		}
		sort(a,a+n);
		for(int i =0; i<n; i++){
			if(a[i]==a[i+1]){
				b[i] = 1;
				b[i+1] =1;
			}
		}
		for(int i =0; i<n; i++){
			sum+=b[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
