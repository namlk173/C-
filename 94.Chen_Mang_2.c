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
	int t, m, n, p, i, j;
	scanf("%d", &t);
	for(i = 0; i<t; i++){
		scanf("%d%d%d", &n, &m, &p);
		int a[n], b[m];
		for(j=0; j<n; j++){
			scanf("%d", &a[j]);
		}
		for(j=0; j<m; j++){
			scanf("%d", &b[j]);
		}
		printf("Test %d:\n", i+1);
		chen_mang(a,b,n,m,p);
		printf("\n");
	}
	return 0;
}

