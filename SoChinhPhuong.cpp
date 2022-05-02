#include<iostream>
#include<math.h>
using namespace std;
bool check_Armstrong(long long n){
	long long sum = 0;
	long long y = n;
	long long x = n;
	long long count =0;
	while(x!=0){
		x=x/10;
		count  = count + 1;
	}
	while(y!=0){
		sum = sum + pow((y%10),count);
		y=y/10;
	}
	if(sum==n) return 1;
	return 0;
}
int main(){
	long long  n;
	cin>>n;
	long long h=0;
	for(long long i =1; i<=n; i++){
		if(check_Armstrong(i)){
			h = h+1;
		}
	}
	cout<<h;
	return 0;
}
