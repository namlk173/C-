#include<bits/stdc++.h>
using namespace std;
long long sum;
long long arr[10];
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	cout<<sum;
	return 0;
} 
