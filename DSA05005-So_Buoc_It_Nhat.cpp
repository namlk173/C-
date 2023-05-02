#include<bits/stdc++.h>
using namespace std;
int t, n;

int So_Buoc_It_Nhat(int a[], int n){
	int mark[n];
	mark[0] = 1;
	for(int i=1; i<n; i++){
		int Max = 0;
		for(int j=0; j<i; j++){
			if(a[j]<=a[i]){
				Max = max(Max, mark[j]);
			}
		}
		mark[i] = Max + 1;
	}
	int Max = 0;
	for(int i=0; i<n; i++){
		Max = max(Max, mark[i]);
	}
	return n-Max;
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		cout<<So_Buoc_It_Nhat(a, n)<<endl;
	}
	return 0;
}
