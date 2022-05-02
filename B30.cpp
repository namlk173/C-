#include<bits/stdc++.h>
using namespace std;
int t;
int n, a[1000];
int find_Min(int a[], int n){
	int Min = 1000000;
	for(int i =0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(i == j) continue;
			else{
				Min = min(Min, abs(a[i]-a[j]));
			}
		}
	}
	return Min;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		cout<<find_Min(a,n)<<endl;
	}
	return 0;
} 
