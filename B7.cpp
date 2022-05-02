#include<bits/stdc++.h>
using namespace std;
int t;
int x,y,z;
long long n;
long long result;
long long h;
long long k;
long long find_result(int x, int y, int z, long long n){
	h = pow(10,n-1);
	k = pow(10,n)-1;
	cout<<h<<" "<<k<<" ";
	for(long long i = h; i<=k;i++){
		if(i%x==0 && i%y==0 && i%z==0) return i;
	}
	return -1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>x>>y>>z>>n;
		cout<<find_result(x,y,z,n);
		cout<<endl;
	}
	return 0;
}
