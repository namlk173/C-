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
	int n, i, j;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}	
	int index_min = 0;
	for(i=0; i<n-1; i++){
		printf("Buoc %d: ", i+1);
		index_min = i;
		for(j=i+1; j<n; j++){
			if(a[j]<a[index_min]) index_min = j;
		}
		if(index_min!=i){
			int temp = a[i];
			a[i] = a[index_min];
			a[index_min] = temp;
		}
		__in(a, n);
	}
	return 0;
}
