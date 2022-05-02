#include<bits/stdc++.h>
using namespace std;
int t;
int n, k, a[1000];
int count_sum_k(int a[], int n, int k){
	int count = 0;
	for(int i =0; i<n-1; i++){
		for(int j =i+1; j<n; j++){
			if(a[i]+a[j]==k) count++; 
		}
	}
	return count;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		cout<<count_sum_k(a,n,k)<<endl;
		
	}
	return 0;
} 
