#include<bits/stdc++.h>
using namespace std;
#define m  1000000007;

long long modul(int a, int x, int n){
	long long mod = 1;
	a = a%m;
	x = x%m;
	for(int i =0; i<n; i++){
		mod = (mod * x)%m;
	}
	return (a*mod)%m;
}
long long ketqua(int a[], int n, int x){
	long long result = 0;
		for(int i = 0; i<n; i++){
			result  = (result + modul(a[i],x,n-i-1))%m;
		}
	return result;
}
int main(){
	int t, n, x, a[2000];
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i =0; i<n;i++)
		{
			cin>>a[i];
		}
		cout<<ketqua(a,n,x)<<endl;
	}
	return 0;
}
