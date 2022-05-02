#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int a[1000000];
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
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		
		for(int i =1; i<=10000000; i++){
			if(check(a,n,i)==0){
				cout<<i;
				break;
			}
		}
		cout<<endl;
	}
	return 0;
} 
