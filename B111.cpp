#include<bits/stdc++.h>
using namespace std;
int t,n,a[100000];
int sum[100000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sum[0]=a[0];
		for(int i = 1; i<n; i++){
			int	Max = 0;
			for(int j =0; j<i-1; j++){
			 	Max= max(Max,sum[j]);
			}
			sum[i] = Max + a[i];
		}
		int result =0;
		for(int i =0;i<n; i++){
			result = max(result,sum[i]);
		}
		cout<<result;
		cout<<endl;
	}
	return 0;
}

