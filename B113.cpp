#include<bits/stdc++.h>
using namespace std;
int t,n,a[1000];
int longest_subsequence[1000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n; i++){
			cin>>a[i];
			longest_subsequence[i]=1;
		}
		int lmax = 0;
		for(int i =1; i<n; i++){
			for(int j =0; j<i; j++){
				if(a[i]>a[j]&&longest_subsequence[i]<longest_subsequence[j]+1){
					longest_subsequence[i]=longest_subsequence[j]+1;
				}
			}
		}
		for(int i  =0; i<n; i++){
			lmax = max(lmax,longest_subsequence[i]);
		}
		cout<<lmax<<endl;
	}
	return 0;
} 
