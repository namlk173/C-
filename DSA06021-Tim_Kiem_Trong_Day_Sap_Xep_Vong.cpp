#include<bits/stdc++.h>
using namespace std;

int search(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i]==x) return i+1;
	}
	return -1;
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
		cout<<search(a, n, x)<<endl;
	}
	return 0;
}

