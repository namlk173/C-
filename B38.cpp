#include<bits/stdc++.h>
using namespace std;
int t;
int x, n, a[1000000];
int find_index(int a[],int n, int x){
	for(int i =0; i<n; i++){
		if(a[i]==x){
			return i+1;
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
		cout<<find_index(a,n,x)<<endl;
	}
	return 0;
} 
