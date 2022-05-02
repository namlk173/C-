#include<bits/stdc++.h>
using namespace std;
int t,n,a[1000];
int find_result(int a[],int n){
	int result = -999999;
	for(int i =0; i<n-1; i++){
		for(int j =i+1; j<n; j++){
			result = max(result,a[j]-a[i]); 
		}
	}
	if(result>0){
		return result;
	}
	else{
		return -1;
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		cout<<find_result(a,n)<<endl;
	}
	return 0;
}
