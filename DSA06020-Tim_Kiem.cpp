#include<bits/stdc++.h>
using namespace std;

int search(int a[], int n, int x){
	int low = 0;
	int hight = n-1;
	while(low <= hight) {
		int mid = (low + hight)/2;
		if (x > a[mid]) {
			low = mid + 1;
		} else if (x < a[mid]) {
			hight = mid - 1;
		} else {
			return 1;
		}
	}
	return -1;
}

int main(){
	int t; 
	cin>>t;
	while(t--) {
		int n, x;
		cin>>n>>x;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		cout<<search(a, n, x)<<endl;
	}
	return 0;
}
