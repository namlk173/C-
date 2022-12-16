#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int size = 2*n-1;
	int a[size][size];
	int x = n;
	while(n!=0){
		for(i=x-n; i<size; i++){
			for(j=x-n; j<size; j++){
				if(i==x-n||j==x-n||i==size-1||j==size-1){
					a[i][j] = n;
				}	
			}
		}
		size = size-1;
		n = n-1;
	}
	
	for(i=0; i<x*2-1; i++){
		for(j=0; j<x*2-1; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
