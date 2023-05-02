#include<bits/stdc++.h>
using namespace std;

int Day_Con_Tang(int a[], int n){
	int mark[n];
	mark[0] = 1;
	for(int i=1; i<n; i++){
		int Max = 0;
		for(int j=0; j<i; j++){
			if(a[j]<a[i]){
				Max = max(Max, mark[j]);
			}
		}
		mark[i] = Max + 1;
	}
	int Max = mark[0];
	for(int i=1; i<n; i++){
		Max = max(Max, mark[i]);
	}
	return Max;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<Day_Con_Tang(a, n)<<endl;
	return 0;
}
