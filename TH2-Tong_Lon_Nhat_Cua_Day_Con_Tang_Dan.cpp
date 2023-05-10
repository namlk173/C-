#include<bits/stdc++.h>
using namespace std;
int t, n;

int max_of_sum(int a[], int n){
	int mark[n];
	mark[0] = a[0];
	for(int i=1; i<n; i++){
		int Max = 0;
		for(int j=0; j<i; j++){
			if(a[i] > a[j]){
				Max = max(Max, mark[j]);
			}
		}
		mark[i] = Max + a[i];
	}
	int Max = mark[0];
	for(int i=1; i<n; i++){
		Max = max(Max, mark[i]);
	}
	return Max;
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		cout<<max_of_sum(a, n)<<endl;
	}
	return 0;
}
