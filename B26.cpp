#include<bits/stdc++.h>
using namespace std;
int t;
int n, a[100000];
int Max_of_array(int a[], int n){
	int Max = a[0];
	for(int i = 1; i<n; i++){
		Max = max(Max, a[i]);
	}
	return Max;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		cout<<Max_of_array(a,n)<<endl;
	}
	return 0;
}
