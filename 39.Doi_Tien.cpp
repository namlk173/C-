#include<bits/stdc++.h>
using namespace std;
const int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int doi_tien(int n){
	int res = 0;
	for(int i=9; i>=0; i--){
		int temp =  n/a[i];
		res += temp;
		n -= temp*a[i];
	}
	return res;
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<doi_tien(n)<<endl;
	}
	return 0;
}
