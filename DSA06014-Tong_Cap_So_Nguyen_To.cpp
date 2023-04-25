#include<bits/stdc++.h>
using namespace std;

bool snt(int n){
	if(n<2) return false;
	if(n==2) return true;
	int x = sqrt(n);
	for(int i =2; i<=x; i++){
		if(n%i==0) return false;
	}
	return true;
}

int tong_cap_so_nguyen_to(int n){
	for(int i=2; i<n; i++){
		if(snt(i) && snt(n-i)){
			return i;
		}
	}
	return -1;
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		if(tong_cap_so_nguyen_to(n)==-1){
			cout<<"-1";
		} else{
			cout<<tong_cap_so_nguyen_to(n)<<" "<<n-tong_cap_so_nguyen_to(n);
		}
		cout<<endl;
	}
	return 0;	
}
