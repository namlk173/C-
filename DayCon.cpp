#include<bits/stdc++.h>
using namespace std;
int n;
int A[100];
int L[100];
int main(){
	cin>>n;
	for(int i =1; i<=n; i++){
		cin>>A[i];
	}
	L[1]=1;
	for(int i =1; i<=n; i++){
		for(int j = 1; j < i-1; j++){
			if(A[j]<=A[i] && L[i]<L[j]+1){
				L[i]=L[j]+1;
			}
		}
	}
	for(int i = 1;i<=n;i++){
		cout<<L[i]<<" ";
	}
	return 0;
}
