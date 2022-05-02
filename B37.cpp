#include<bits/stdc++.h>
using namespace std;
int t, n, a[1000];
int check(int a[], int n, int x){
		for(int j=0; j<n; j++){
			if(a[j]==x )return 1;
	}
	return 0;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int l = a[n-1];
		int r= a[0];
		int count = 0;
		for(int i = r; i<=l; i++){
			if(check(a,n,i)==0) {
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
} 
