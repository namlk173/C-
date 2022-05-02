#include<bits/stdc++.h>
using namespace std;
int t;
int n,x;
int a[100000];
int check(int a[], int n, int x){
	int i =0;
	int j = 1;
	while(i<n&&j<n){
		if(abs(a[j]-a[i])==abs(x)&&i!=j){
			return 1;
		}
		else if(a[j]-a[i] > x){
			i++;
		}
		else{
			j++;
		}
	}
	return -1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<check(a,n,x);
		cout<<endl;
	}
	return 0;
}
