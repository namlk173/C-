#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		bool is_exist = false;
		for(int j=0; j<i; j++){
			if(a[i]==a[j]) {
				is_exist = true;
			}
		}
		if(!is_exist){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
	return 0;
}
