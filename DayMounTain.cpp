#include<bits/stdc++.h>
using namespace std;
int t;
int l ,r, n, a[10000];
bool check(int a[], int l, int r, int n){
	int Max = 0;
	int index = -1;
	for(int i =l; i<=r; i++){
		if(Max < a[i]){
			Max = a[i];
			index = i;
		} 
	}
	for(int i =l; i<index; i++){
		if(a[i]>a[i+1]) return 0;
	}
	for(int i = index; i<r; i++){
		if(a[i]<a[i+1]) return 0;
	}
	return 1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0 ;i<n; i++){
			cin>>a[i];
		}
		cin>>l>>r;
		if(check(a,l,r,n)==0){
			cout<<"No";
		}
		else{
			cout<<"Yes";
		}
		cout<<endl;
	}
	return 0;
}
