#include<bits/stdc++.h>
using namespace std;
int t,n;
long long a[10000];
long long b[10000];
int main(){
	cin>>t;
	while(t--){
	cin>>n;
	for(int i = 0;i<n; i++){
		cin>>a[i];
		b[i] =a[i];
	}
	int count=0;
	sort(a,a+n);
	for(int i= 0; i<n; i++){
		if(b[i]!=a[i]){
			count++;
			for(int j = i+1; j<n; j++){
				if(b[j]==a[i]){
					swap(b[i],b[j]);
				}
			}
		}
	}
	cout<<count<<endl;
	}
	return 0;
}
