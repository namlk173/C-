#include<bits/stdc++.h>
using namespace std;

int so_lan_xuat_hien(int a[], int n, int x){
	int left = 0, right = n-1;
	int index = -1;
	while(left <= right) {
		int mid = (left + right)/2;
		if(a[mid] < x){
			left = mid + 1;
		} else if(a[mid] > x) {
			right = mid -1;
		} else {
			index = mid;
			break;
		}
	}
	if(index != -1){
		int res = 1;
		int left = index -1;
		int right = index + 1;
		while(a[left] == x){
			res = res + 1;
			left--;
		}
		while(a[right] == x){
			res = res + 1;
			right++;
		}
		return res;
	}
	return index;
}

int main(){
	int t, n, x;
	cin>>t;
	while(t--){
		cin>>n>>x;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		cout<<so_lan_xuat_hien(a, n, x)<<endl;
	}
	return 0;
}
