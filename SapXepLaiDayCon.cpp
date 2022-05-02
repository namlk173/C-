#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int a[1000000];
int b[1000000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i =0; i<n;i++){
			b[i]=a[i];
		}
		sort(a,a+n);
		int Min = 0, Max= 0;
		for(int i =0; i<n; i++){
			if(a[i]!=b[i]){
				Min  =i;
				break;
			}
		}
		for(int i =n-1; i>=0; i--){
			if(a[i]!=b[i]){
				Max = i;
				break;
			}
		}
		cout<<Min+1<<" "<<Max+1;
		cout<<endl;
	}
	return 0;
}
