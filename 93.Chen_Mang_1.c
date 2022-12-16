#include<stdio.h>
void chen_mang(int a[], int b[], int n, int m, int p){
	int i;
	for(i=0; i<p; i++){
		printf("%d ", a[i]);
	}
	for(i=0; i<m; i++){
		printf("%d ", b[i]);
	}
	for(i=p; i<n; i++){
		printf("%d ", a[i]);
	}
}
int main(){
	int m, n, p, j;
	scanf("%d%d", &n, &m);
	int a[n], b[m];
	for(j=0; j<n; j++){
		scanf("%d", &a[j]);
	}
	for(j=0; j<m; j++){
		scanf("%d", &b[j]);
	}
	scanf("%d", &p);
	chen_mang(a,b,n,m,p);
	return 0;
}

