#include<stdio.h>
void shift_right(int a[], int n, int r){
	int i;
	for(i=n-r; i<n; i++){
		printf("%d ", a[i]);
	}
	for(i=0; i<n-r; i++){
		printf("%d ", a[i]);
	}
}
int main(){
	int i, t, n, r;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &r);
	shift_right(a, n, r);
	printf("\n");
	return 0;
}
