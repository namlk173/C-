#include<bits/stdc++.h>
using namespace std;
#define Max 10
int a[Max], t, n;

bool check(int a[], int n){
	for(int i=0; i<n-1; i++){
		if(abs(a[i] - a[i+1])==1) return false;
	}
	return true;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			a[i] = i+1;
		}
		do{	
			if(check(a, n)){
				for(int i=0; i<n; i++){
					cout<<a[i];
				}
				cout<<endl;
			}
		} while(next_permutation(a, a+n));
	}
	return 0;
}
