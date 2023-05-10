#include<bits/stdc++.h>
using namespace std;
int n;

int main(){
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	if(a[n-1]<=0){
		cout<<a[0]*a[1]<<endl;
		return 0;
	} 
	if(a[0]>=0){
		cout<<max(a[1] * a[2], a[0] * a[1] * a[2]);
		return 0;
	}
	
	return 0;
}
