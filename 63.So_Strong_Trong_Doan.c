#include<stdio.h>
int strong_number(int n){
	if(n==0) return 0;
	int a[10], i;
	a[0] = 1;
	for(i=1; i<10; i++){
		a[i] = a[i-1] * i;
	}
	int temp = n;
	int tong = 0;
	while(temp!=0){
		tong = tong + a[temp%10];
		temp = temp/10;
	}
	if(tong==n) return 1;
	return 0;
}
int main(){
	int a, b, i;
	scanf("%d%d", &a, &b);
	int start = a>b?b:a;
	int end = a>b?a:b;
	for(i=start; i<=end; i++){
		if(strong_number(i)) printf("%d ", i);
	}
	return 0;
}
