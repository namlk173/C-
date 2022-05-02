#include<bits/stdc++.h>
using namespace std;
int t, n;
long long  A[1000000];
long long  B[1000000];

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i =0; i<n;i++){
			cin>>A[i];
		}
		for(int i =0; i<n; i++){
			B[i]=-1;
		} 
		for(int i= 0; i<n; i++){
			for(int j =0; j<n; j++){
				if(A[j]==i) {
					B[i] = i;
					break;
				}
			}
		}
		for(int i =0; i<n; i++){
			cout<<B[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
