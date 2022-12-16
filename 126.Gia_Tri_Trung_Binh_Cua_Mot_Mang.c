#include<stdio.h>
int main(){
	int n, i;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	long long tong = 0;
	for(i=0; i<n; i++){
		tong = tong + a[i]; 
	}
	printf("%.3lf ", ((double)tong/n));
	return 0;
}
