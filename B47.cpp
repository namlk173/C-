#include<bits/stdc++.h>
using namespace std;
int t;
int d,n;
int A[1000000];
int B[1000000];
void arr_rotation(int A[], int n, int d, int B[]){
	for(int i =0; i<n;i++){
		if(i+d < n) B[i] = A[i+d];
		else B[i] = A[i+d-n];
	}
}
int main(){
	cin>>t;
	while(t--){
		B[1000000] = 0;
		cin>>n>>d;
		for(int i =0; i<n; i++){
			cin>>A[i];
		}
		arr_rotation(A,n,d,B);
		for(int i =0; i<n; i++){
			cout<<B[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
