#include<bits/stdc++.h>
using namespace std;
int t;
int n, a[1000]; 
int sum_around_zero(int a[],int n){
	int result = 2000000;
	for(int i =0; i<n-1; i++){
		for(int j =i+1; j<n; j++){
			if(abs(result) > abs(a[i]+a[j])){
				result = a[i]+a[j];
			}
		}
	}
	return result;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		cout<<sum_around_zero(a,n)<<endl;
	}
	return 0;
} 
