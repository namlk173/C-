#include<stdio.h>
void shift_left(int a[], int n, int l){
	int i;
	for(i=l; i<n; i++){
		printf("%d ", a[i]);
	}
	for(i=0; i<l; i++){
		printf("%d ", a[i]);
	}
}
int main(){
	int n, l, i;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &l);
	shift_left(a, n, l);
	printf("\n");
	return 0;
}
