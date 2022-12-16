#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i = 0; i<n; i++){
		printf("%d ", i+1);
		int temp = i + 1 + (n-1);
		for(j=0; j<i; j++){
			printf("%d ", temp);
			temp = temp + (n-1) -j -1;
		}
		printf("\n");
	}
	return 0;
}
