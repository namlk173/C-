#include<stdio.h>
void __in(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return;
}
int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n-1; i++){
		printf("Buoc %d: ", i+1);
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		__in(a, n); 
	}
	return 0;
}
