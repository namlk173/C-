#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[35], i;
	a[0] = 0;
	a[1] = 1;
	for(i=2; i<35; i++){
		a[i] = a[i-1] + a[i-2]; 
	}
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
