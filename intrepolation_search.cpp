#include<bits/stdc++.h>
using namespace std;

int search(int a[], int n, int x){
	int low = 0;
	int hight = n-1, mid;
	while(a[low] <= x && a[hight] >= x) {
		if(a[hight] - a[low] == 0) return (low+hight)/2;
		mid = low + ((x-a[low]) * (hight-low)) / (a[hight] - a[low]);
		if(a[mid] <x) low = mid +1;
		else if (a[mid]> x) hight = mid -1;
		else return mid;
	}
	if(a[low]==x) return low;
	return -1;
}

int main(){
	int n, x;
	cin>>n>>x;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<search(a, n, x);
	return 0;
}
