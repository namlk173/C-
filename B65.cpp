#include<bits/stdc++.h>
using namespace std;
int n;
long long int A[21];
void Gan(long long int A[], int n){
	A[0] = 1;
	A[1] = 2;
	for(int i =2; i<n; i++){
		A[i] = A[i-1]*(i+1);
	}
}
int main(){
	cin>>n;
	Gan(A,n);
	long long int result= 0;
	for(int i =0; i<n; i++){
		result += A[i];
	}
	cout<<result;
	return 0;
}
