#include<stdio.h>
int main(){
	int n, m, i, j, t, test=1, k;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		int a[n][m];
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", test++);
		for(i=0; i<n; i++){
			for(k=0; k<n; k++){
				int value=0;
				for(j=0; j<m; j++){
					value=value + (a[i][j] * a[k][j]);
				}				
				printf("%d ", value);
			}
			printf("\n");
		}
	}
	return 0;
}
