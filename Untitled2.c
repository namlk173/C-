#include<stdio.h>
int comparator(const void *p, const void *q) 
{ 
    return (*(int*)p-*(int*)q);
} 
int main(){

	int n, i;
	scanf("%d", &n);
	int a[n], mark[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		mark[i] = 1;
	}
	qsort((void*)a, n, sizeof(a[0]), comparator); 
	for(i=0; i<n; i++){
		if(a[i]%2==0) printf("%d ", a[i]);
	}
	for(i=0; i<n; i++){
		if(a[i]%2!=0) printf("%d ", a[i]);
	}
	return 0;
}
