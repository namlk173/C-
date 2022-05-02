#include<bits/stdc++.h>
using namespace std;
#define m  1000000007
int t, n, a[60];
int ucln(int x, int y){
	while(x!=0){
		int temp =x;
		x =y%x;
		y =temp;
	}
	return y;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		long long g = a[0];
		for(int i =1; i<n; i++){
			g = ucln(g,a[i]);
		}
		long long h = 1;
		for(int i =0; i<n;i++){
			h = (h*a[i])%m;
		}
		long long result = h;
		for(int i =0; i<g-1; i++){
			result = (result*h)%m;
		}
		cout<<result<<endl;
	}
	return 0;
}
