#include<bits/stdc++.h>
using namespace std;
int t;
int n,k,x,a[1000000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
		}
		cin>>k>>x;
		int Min = 1000000;
		int index = -1;
		for(int i =0;i<n; i++){
			if(Min > abs(a[i]-x)){
				Min = abs(a[i]-x);
				index = i;
			}
		}
		if(a[index]-x ==0){
			for(int i = index- k/2; i<index; i++){
				cout<<a[i]<<" ";
			}
			for(int i = index +1; i<=index + k/2; i++){
				cout<<a[i]<<" ";
			}
		}
		else if(a[index]-x < 0){
			for(int i = index - k/2 + 1; i<=index ; i++){
				cout<<a[i]<<" ";
			}
			for(int i = index + 1; i<=index + k/2; i++){
				cout<<a[i]<<" ";
			}
		}
		else if(a[index]-x > 0){
			for(int i = index - k/2; i<index; i--){
				cout<<a[i]<<" ";
			}
			for(int i = index; i<=index + k/2; i++){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
