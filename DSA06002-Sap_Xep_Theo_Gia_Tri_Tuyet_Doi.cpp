#include<bits/stdc++.h>
using namespace std;
int x, n;
int t;

bool compare(int a, int b){
	return abs(a-x) < abs(b-x);
}

int main(){
	cin>>t;
	while(t--){
		cin>>n>>x;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];	
		}
		stable_sort(a, a+n, compare);
		for(int i=0; i<n; i++){
			cout<<a[i]<<" ";
		} 
		cout<<endl;
	}
	return 0;
}
