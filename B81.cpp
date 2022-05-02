#include<bits/stdc++.h>
using namespace std;
int t;
int n, a[1000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		for(int i =n-1; i>=0; i--){
			if(a[i]<a[i-1]){
				int temp = a[i];
				a[i] = a[i-1];
				a[i-1] =temp;
				break;
			}
		}
		for(int i =0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
