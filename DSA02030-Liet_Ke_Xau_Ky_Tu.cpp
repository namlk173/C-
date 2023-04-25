#include<bits/stdc++.h>
using namespace std;
#define Max 100
int n;
char c;
int a[Max], k;

void Print(int a[], int k){
	if(a[k] >= n){
		return;
	}
	for(int i=1; i<=k; i++){
		cout<<char(65+a[i]);
	}
	cout<<endl;
}

void Try(int i){
	for(int j=a[i-1]; j<=n-k+i+k; j++){
		a[i] = j;
		if(i==k){
			Print(a, k);
		} else{
			Try(i+1);
		}
	}
	return;
}

int main(){
	cin>>c>>k;
	n = int(c) - 64;
	a[0] = 0;
	Try(1);	
	return 0;
}
