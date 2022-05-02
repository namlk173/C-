#include<bits/stdc++.h>
using namespace std;
int t;
int n;
long long A[1000000];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int  i =0 ;i<n; i++){
			cin>>A[i];
		}
		for(int i =0 ; i<n-1; i++){
			for(int j = i+1; j<n; j++){
				if(A[i]==0 && A[j]!=0){
					A[i] = A[j];
					A[j] = 0;
				}
			}
		}
		for(int i =0 ;i<n; i++){
			cout<<A[i]<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}
