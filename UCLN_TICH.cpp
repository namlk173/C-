#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int A[60];
int result;
int hx;
int gx;
int M = pow(10,9) + 7;
int UCLN(int a, int b){
	if(a==0||b==0) return 0;
	while(a!=b){
		if(a>b) a=a-b;
		if(b>a) b=b-a;
	}
	return a;
}
int main(){
	
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>A[i];
		}
		gx = A[0];
		hx =1;
		for(int i = 0; i<n; i++){
			gx = UCLN(gx,A[i]);
			hx = (hx * A[i]) % M;
 		}
 		result = (pow(hx,gx));
 		result = result % M;
		 cout<<result;
	}
	return 0;
}
