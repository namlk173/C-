#include<bits/stdc++.h>
using namespace std;

int dem_so_0(int a[], int n){
	int left = 0, right = n-1;
	while(left<right){
		int mid = (left+right)/2;
		if(a[mid]==1){
			right = right - 1;
		} else {
			if(a[mid+1]==1){
				return mid + 1;
			} else {
				left = mid + 1;
			}
		}
	}
//	cout<<left<<" "<<right<<endl;
	if(left==0){
		return 0;
	} else {
		return left + 1;
	}
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		cout<<dem_so_0(a, n)<<endl;
	}
	return 0;
}
