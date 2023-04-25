#include<bits/stdc++.h>
using namespace std;
#define Max 100
int a[Max];
bool OK;

void Init(int n){
	for(int i=0; i<n; i++){
		a[i] = 0;
	}
}

void in(int a[], int n, int k) {
	int nums = 0;
	for(int i=0; i<n; i++){
		if(a[i]==1) nums++;
	}
	if(nums==k){
		for(int i=0; i<n; i++){
			cout<<a[i];
		}
		cout<<endl;
	}
}

void sinh_ke_tiep(int n, int k){
	int i=n-1;
	while(i>=0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>=0){
		a[i] = 1;
		in(a, n, k);
	} else {
		OK = false;
	}
}

int main(){
	int t, n, k;	
	cin>>t;
	while(t--){
		cin>>n>>k;
		Init(n);
		OK = true;
		while(OK){
			sinh_ke_tiep(n, k);
		}
	}
}
