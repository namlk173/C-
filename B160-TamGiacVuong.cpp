#include<bits/stdc++.h>
using namespace std;
int t,n;
long long a[5000];
bool check(long long a[], int n){
	sort(a,a+n);
	for(int i =0;i<n;i++){
		a[i]*=a[i];
	}
	for(int i = n-1; i>=2; i--){
		int l =0; 
		int r= i-1;
		while(l!=r){
			if(a[l]+a[r]==a[i]){
				return 1;
			}
			else if(a[l]+a[r]<a[i]){
				l++;
			}
			else{
				r--;
			}
		}
	}
	return 0;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0;i<n;i++){
			cin>>a[i];
		}
		if(check(a,n)==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
