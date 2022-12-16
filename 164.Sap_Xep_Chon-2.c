#include<stdio.h>
void __in(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return;
}
int main(){
	int n, i, j, min_index;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n-1; i++){
		min_index = i;
		for(j=i+1; j<n; j++){
			if(a[j]<a[min_index]){
				min_index = j;
			}
		}
		if(min_index!=i){
			int temp = a[i];
			a[i] = a[min_index];
			a[min_index] = temp;
		}
		__in(a, n);
	}
	return 0;
}
