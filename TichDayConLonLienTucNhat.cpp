#include<bits/stdc++.h>
using namespace std;
int t, n, a[100];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		long long M = -999999999;
		for(int i =0; i<n; i++){
			long long temp = 1;
			for(int j = i; j<n; j++){
				temp = temp * a[j];
				M = max(M,temp);
			}
		}
		cout<<M<<endl;
	}
	return 0;
}
