#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int a[1000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		int count =0;
		for(int i =0, j=n-1; i<=j; ){
			if(a[i]==a[j]){
				i++;
				j--;
			}
			else if(a[i]>a[j]){
				count ++;
				j--;
				a[j] = a[j]+a[j+1];

			}
			else if(a[j]>a[i]){
				count++;
				i++;
				a[i] = a[i]+a[i-1]; 
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
