#include<bits/stdc++.h>
using namespace std;

int search(int a[], int x, int start, int end){
	if (start > end) return -1;
	int mid1 = start + (end-start)/3;
	int mid2 = start + 2*(end-start)/3;
	if(a[mid1]==x) return mid1;
	if(a[mid2]==x) return mid2;
	if(x<a[mid1]) return search(a, x, start, mid1-1);
	if(x>a[mid2]) return search(a, x, mid2+1, end);
	return search(a, x, mid1+1, mid2-1); 
}

int main(){
	int n, x;
	cin>>n>>x;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<search(a, x, 0, n-1);
	return 0;
}
