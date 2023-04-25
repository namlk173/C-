#include<bits/stdc++.h>
using namespace std;
#define Max 100

int a[Max];

void in(int a[], int n, int k) {
	int nums = 0;
	for(int i=0; i<n; i++){
		if(a[i]==1) nums++;
	}
	if(nums==k){
		for(int i=0; i<n; i++){
			cout<<a[i];
		}
		cout<<endl;
	}
}

void sinh_ke_tiep(int i, int n, int k){
	for(int j=0; j<=1; j++){
		a[i] = j;
		if(i==n-1){
			in(a, n, k);
		} else {
			sinh_ke_tiep(i+1, n, k);
		}
	}
}

int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		sinh_ke_tiep(0, n, k);
	}
	return 0;
}
