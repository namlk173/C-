#include<bits/stdc++.h>
using namespace std;
#define Max 100
int mark[Max];
int a[Max];
bool OK = true;
int res = 0;

void check_and_in(int a[], int mark[], int n, int k){
	long long sum = 0;
	for(int i=0; i<n; i++){
		if(mark[i] == 1) {
			sum+= a[i];
		}
	}
	
	if(sum==k){
		res++;
		for(int i=0; i<n; i++){
			if(mark[i] == 1) {
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}

void sinh(int n){
	int i = n-1; 
	while(i>=0 && mark[i]==1){
		mark[i] = 0;
		i--;
	}
	if(i>=0){
		mark[i] = 1;
	} else {
		OK = false;
	}
}

void Init(int n){
	for(int i=0; i<n; i++){
		cin>>a[i];
		mark[i] = 0; 
	}
}
int main(){
	int n, k;
	cin>>n>>k;
	Init(n);
	while(OK){
		check_and_in(a, mark, n, k);
		sinh(n);
	}
	cout<<res;
}
