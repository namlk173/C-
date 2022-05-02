#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int a[100000];
int count(int a[], int n, int k){
	int i =0;
	int j =1;
	int c = 0;
	while(i<n&&j<n){
		if(abs(a[j]-a[i])>=k){
			i++;
		}
		else{
			c++;
			j++;
		}
		
	}
	return c;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<count(a,n,k)<<endl;
	}
	return 0;
}
