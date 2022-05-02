#include<bits/stdc++.h>
using namespace std;
int t;
int n;
int k;
bool flag;
int find_result(int n){
	int c_n = 0;
	int i = 0;
	while(n!=0){
		if((n%100)/10 > n%10 && k <1)
		{
		c_n = c_n + ((n%100)/10)*pow(10,i) + (n%10)*pow(10,i+1);
		i+=2;
		n/=100;
		flag = true;
		}
		c_n = c_n + (n%10)*pow(10,i);
		i++; 
		n/=10;
	}
	if(!flag) return -1;
	return c_n;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<find_result(n);
	}
	return 0;
}
