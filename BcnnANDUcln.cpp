#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[100],b[100];
int count = 0;
long long UCLN(long long a,long long b){  
if(a > b) a=a-b;
if(b > a) b=b-a;
if(a=b) return a;
}
long long BCNN(long a, long b){  
return a*b/UCLN(a,b);
}
int main(){
//	cin>>n>>m;
//	for(int i = 0; i<n; i++){
//		cin>>a[n];
//	}
////	for(int i = 0; i<m; i++){
////		cin>>b[m];
////	}
//	long long bcnn = BCNN(a[0],a[1]);
//	int ucll =1;
//	for(int i =2;i<n;i++){
//		bcnn = BCNN(bcnn,a[i]);
//	}
	cout<<UCLN(6,4);
	
	return 0;
}
