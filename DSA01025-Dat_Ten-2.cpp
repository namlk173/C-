#include<bits/stdc++.h>
using namespace std;
#define Max 100
bool OK;
int a[Max];

void Init(int k){
	for(int i=0; i<k; i++){
		a[i] = i+1;
	}
}

void in(int a[], int k){
	for(int i=0; i<k; i++){
		cout<<char(a[i]+'A'-1);
	}
	cout<<endl;
}

void sinh(int a[], int n, int k){
	int i = k-1;
	while(i>=0 && a[i]==n-k+i+1){
		i--;
	}
	if(i>=0){
		a[i] = a[i] + 1;
		for(int j=i+1; j<k; j++){
			a[j] = a[i] + j - i;
		}
	} else{
		OK = false;
	}
}

int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Init(k);
		OK = true;
		while(OK){
			in(a, k);
			sinh(a, n, k);
		}
	}
	return 0;
}
