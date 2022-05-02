#include<bits/stdc++.h>
using namespace std;
int t, n, k;
int find_result(int n, int k){	
	int flag=0;
	int i = 2;
	while(n!=1){
		while(n%i==0){
			n=n/i;
			flag+=1;
			if(flag == k) return i;
		}
		i++;
	}
	return -1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<find_result(n,k)<<endl;
	}
	return 0;
}
