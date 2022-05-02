#include <bits/stdc++.h>
using namespace std;
int a,m;
int t;
int find_result(int a, int m){
	for(int i = 0; i<m; i++){
		if((a*i) % m ==1){
			return i;
		}
	}
	return -1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>a>>m;
		cout<<find_result(a,m)<<endl;
	}
	return 0;
}
