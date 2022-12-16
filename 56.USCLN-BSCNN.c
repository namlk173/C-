#include<stdio.h>
long long USCLN(long long a, long b){
	long long temp;
	while(a!=0){
		temp = a;
		a = b%a;
		b = temp;
	}
	return b;
}
long long BSCNN(long long a, long long b){
	return a/USCLN(a,b)*b;
}
int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n%lld", USCLN(a,b), BSCNN(a,b));
	return 0;
}
