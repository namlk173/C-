#include<stdio.h>
int strong_number(int n){
	int number_origin = n;
	int a[10], i;
	a[0] = 1;
	a[1] = 1;
	for(i = 2; i<10; i++){
		a[i] = a[i-1] * i; 
	}
	int tong = 0;
	while(n!=0){
		tong = tong + a[n%10];
		n = n/10;
	}
	if(number_origin == tong) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", strong_number(n));
	return 0;
}
