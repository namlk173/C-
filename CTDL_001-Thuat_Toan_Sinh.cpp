#include<bits/stdc++.h>
using namespace std;
#define Max 1000
int a[Max];
bool OK = true;

void Init(int n){
	for(int i=0; i<n; i++){
		a[i] = 0;
	}
}

bool check_doi_xung(int a[], int n){
	for(int i=0; i<n/2; i++){
		if(a[i] != a[n-1-i]) return false;
	}
	return true;
}

void in(int a[], int n){
	if(check_doi_xung(a, n)){
		for(int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

void sinh(int n){
	int i=n-1;
	while(i>=0 && a[i]==1){
		a[i] = 0;
		i--;
	}
	if(i>=0) {
		a[i] = 1;
	} else {
		OK = false;
	}
}

int main(){
	int n;
	cin>>n;
	Init(n);
	while(OK){
		in(a, n);
		sinh(n);
	}
}
