#include<stdio.h>
int sothuannghich(int n){
	long long temp = n, tong = 0;
	while(temp!=0){
		tong = tong * 10 + (temp%10);
		temp = temp /10;
	}
	return (tong==n);
}
int so_cuoi_cung_8(int n){
	int tong = 0;
	while(n!=0){
		tong = tong + (n%10);
		n = n /10;
	}
	return ((tong%10)==8);
}

int chua_so_6(int n){
	while(n!=0){
		if(n%10==6){
			return 1;
		}
		n = n/10;
	}
	return 0;
}
int main(){
	int a, b, i;
	scanf("%lld %lld", &a, &b);
	for(i=a; i<=b; i++){
		if(sothuannghich(i) && so_cuoi_cung_8(i) && chua_so_6(i)) printf("%d ", i);
	}
	printf("\n");
	return 0;
}
