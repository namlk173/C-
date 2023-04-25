#include<bits/stdc++.h>
using namespace std;

void inArr(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void merge(int a[], int b[], int n, int m){
	int mergeArr[n+m];
	int i=0, j=0, k=0;
	while(i<n && j<m){
		if(a[i] <= b[j]){
			mergeArr[k++] = a[i];
			i++;
		} else {
			mergeArr[k++] = b[j];
			j++;
		}
	}
	while(i<n) {
		mergeArr[k++] = a[i];
		i++;
	}
	while(j<m) {
		mergeArr[k++] = b[j];
		j++;
	}
	inArr(mergeArr, (n+m));
}

int main(){
	int t, n, m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<m; i++){
			cin>>b[i];
		}
		sort(a, a+n);
		sort(b, b+n);
		merge(a, b, n, m);
	}
	return 0;
}
