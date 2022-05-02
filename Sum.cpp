#include<bits/stdc++.h>
using namespace std;
int sum=0;
int n;
int a[1000];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	cout<<sum;
}
