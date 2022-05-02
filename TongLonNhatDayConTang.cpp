#include<bits/stdc++.h>
using namespace std;
int t, n, a[1000];
long long sum[1000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
			sum[i] = a[i];
		}	

		for(int i =1; i<n; i++){
			for(int j = 0; j<i; j++){
				if(a[i]>a[j]&&sum[i]<sum[j]+a[i]){
					sum[i] = sum[j]+a[i];
				}
			}
		}
		long long Max = sum[0];
		for(int i =0; i<n;i++){
			Max= max(Max,sum[i]);
		}
		cout<<Max<<endl;
	}
	return 0;
} 
