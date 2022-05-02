#include<bits/stdc++.h>
using namespace std;
long long n, a[10000], b[100000];
int main(){
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	for(long long i=0;i<100000;i++){
		if(b[i]!=0){
			cout<<i<<": "<<b[i];
			cout<<endl;
		}
	}
	return 0;
}
