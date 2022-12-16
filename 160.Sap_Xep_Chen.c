#include<stdio.h>
void __in(int a[], int n){
	int i;
	for(i=0; i<=n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return;
}
int main(){
	int n, i, j, index;
	scanf("%d", &n);
	int a[n], b[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		printf("Buoc %d: ", i);
		for(j=0; j<=i; j++){
			if(a[i]<a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}	
		}
		__in(a, i);
	}
	return 0;
} 
