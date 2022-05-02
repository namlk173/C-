#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int k,n;
int t;
void find(int a[], int n, int k){
	for(int i =0; i<n-1; i++){
		for(int j = i+1; j< n; j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout<<a[k-1];
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		find(a,n,k);
		cout<<endl;
	}
	return 0;
}
