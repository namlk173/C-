#include<bits/stdc++.h>
using namespace std;
bool OK;

bool check_1(int a[], int n){
	if(a[0] !=8 || a[n-1] != 6) return false;
	return true;
}

bool check_2(int a[], int n){
	for(int i=0; i<n-1; i++){
		if(a[i]==8 && a[i+1]==8) return false;
	}
	return true;
}

bool check_3(int a[], int n){
	for(int i=0; i<n-3; i++){
		if(a[i]==6){
			if(a[i+1]==6 && a[i+2]==6 && a[i+3]==6) return false;
		}
	}
	return true;
}

void in(int a[], int n){
	if(check_1(a, n) && check_2(a, n) && check_3(a, n)){
		for(int i=0; i<n; i++){
			cout<<a[i];
		}
		cout<<endl;
	}
	return;
}

void sinh_ke_tiep(int a[], int n){
	int i = n-1;
	while(i>=0 && a[i]==8){
		a[i] = 6;
		i--;
	}
	if(i>=0){
		a[i] = 8;
	}else{
	  	OK = false;	
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		a[i] = 6;
	}
	OK = true;
	while(OK){
		in(a, n);
		sinh_ke_tiep(a, n);
	}
	return 0;
} 
