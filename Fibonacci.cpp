#include<bits/stdc++.h>
using namespace std;

int genFibonacci(int n){
	int fibo[n+2];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i=2; i<=n; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	return fibo[n];
}

int main(){
	int n;
	cout<<"Enter number of terms: "; cin>>n;
	cout<<n<<" th fibonacci Terms: "<<genFibonacci(n)<<endl;
	return 0;
}
