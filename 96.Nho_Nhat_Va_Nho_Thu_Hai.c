#include<stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main(){
	int n, i;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmpfunc);
	int snn = a[0];
	int sln;
	for(i = 1; i<n; i++){
		if(a[i]!=snn) {
			sln = a[i];
			break;
		}
	}
	printf("%d %d", snn, sln);
	return 0;
}
