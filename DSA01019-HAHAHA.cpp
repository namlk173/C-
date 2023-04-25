#include<bits/stdc++.h>
using namespace std;
bool OK;

bool kiem_tra(int a[], int n){
	if(a[0] != 1) return false;
	if(a[n-1] != 0) return false;
	for(int i=0; i<n-1; i++){
		if(a[i] == 1 && a[i+1] == 1) {
			return false;
		}
	}
	return true;
}

void in(int a[], int n){
	if(kiem_tra(a, n)){
		for(int i=0; i<n; i++){
			if(a[i]==0) cout<<"A";
			else cout<<"H";
		}
		cout<<endl;
	}

	return;
}

void sinh_ke_tiep(int a[], int n){
	int i = n-1;
	while(i>=0 && a[i]==1){
		a[i] = 0;
		i--;
	} 
	if(i>=0) a[i] = 1;
 	else  OK = false;
 	return;
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			a[i] = 0;
		}
		OK = true;
		while(OK){
			in(a, n);
			sinh_ke_tiep(a, n);
		}
	}
	return 0;
}
