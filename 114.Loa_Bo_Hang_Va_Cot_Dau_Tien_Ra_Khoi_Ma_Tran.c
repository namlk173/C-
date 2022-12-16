#include<stdio.h>
int main(){
	int t, n, m, i, j;
	scanf("%d", &t);
	int test = 1;
	while(t--){
		scanf("%d %d", &n, &m);
		int a[n][m];
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", test++);
		for(i=1; i<n; i++){
			for(j=1; j<m; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
