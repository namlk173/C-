#include<stdio.h>
int check1(long long n){
	while(n!=0){
		if(n%10==6) return 1;
		n = n/10;
	}
	return 0;
}
int check2(long long n){
	long long tong = 0, temp=n, thuan_ngich = 0;
	while(n!=0){
		tong = tong + n%10;
		thuan_ngich = thuan_ngich * 10 + n%10;
		n = n/10;
	}
	if(thuan_ngich!=temp) return 0;
	if(tong%10!=8) return 0;
	return 1;
}
int main(){
	long long a, b, i;
	scanf("%lld %lld", &a, &b);
	long long start = a<b?a:b;
	long long end = a>b?a:b;
	for(i=start; i<=end; i++){
		if(check1(i) && check2(i)) printf("%lld ", i);
	}
	return 0;
}
