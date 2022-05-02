#include<bits/stdc++.h>
using namespace std;
int t;
int n;
long long a[1000000];
int markup[10];
void tich(int x[], long long k){
	while(k!=0){
		x[k%10] = 1;
		k=k/10;
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		for(int i =0; i<10; i++){
			markup[i] =0;
		}
		for(int i = 0; i<n; i++){
			tich(markup,a[i]);
		}
		for(int i =0; i<10; i++){
			if(markup[i]!=0) cout<<i<<" ";
		}
		cout<<endl;
		
	}
	return 0;
} 
