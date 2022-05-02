#include<bits/stdc++.h>
using namespace std;
int n ,k ,b;
int a[100000]; 
int temp[100000];
int main(){
	cin>>n>>k>>b;
	for(int i=0;i<n;i++){
		temp[i]=0;
	}
	for(int i =0 ;i<b; i++){
		cin>>a[i];
		temp[a[i]-1]=1;
	}
	int Min = 100000;
	for(int i = 0; i<n-k+1; i++){
		int So_bong_hong = 0;
		for(int j =i; j<i+k; j++){
			So_bong_hong += temp[j];
		}
		Min = min(Min, So_bong_hong);	
	}
	cout<<Min<<endl;
	return 0;
} 
