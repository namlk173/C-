#include<stdio.h>
long long find_result(long long n){
	long long i = 2, result=1;
	while(n!=1){
		if(n%i==0){
			result = result * i;
			while(n%i==0){
				n=n/i;
			}  
		}
		i = i+1;
	}
	return result;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		printf("%lld\n", find_result(n));
	}
	return 0;
}
