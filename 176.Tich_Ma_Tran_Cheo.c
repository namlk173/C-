#include<stdio.h>
int main(){
	int n, i, j, t, test=1, k;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n][n];
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				a[i][j] = 0;
			}
		}
		for(i=0; i<n; i++){
			for(j=0; j<=i; j++){
				a[i][j] = j+1;
			}
		}
		printf("Test %d:\n", test++);
		for(i=0; i<n; i++){
			for(k=0; k<n; k++){
				int value=0;
				for(j=0; j<n; j++){
					value=value + (a[i][j] * a[k][j]);
				}				
				printf("%d ", value);
			}
			printf("\n");
		}
	}
	return 0;
}
