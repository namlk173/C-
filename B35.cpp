#include<bits/stdc++.h> 
using namespace std; 
int t, n,m;;
long long a[1000000], b[1000000];
int main() 
{	
cin>>t;
while(t--){
	cin>>n>>m;
	for(int i =0; i<n; i++){
		cin>>a[i];
	}
	for(int i =0; i<m; i++){
		cin>>b[i];
	}	
	sort(a,a+n);
	sort(b,b+n);
	cout<<a[n-1]*b[0]<<endl;
}
return 0;
}
