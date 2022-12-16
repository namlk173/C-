#include<stdio.h>

int main(){
	int t, i, j;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		int a[n][m];
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				scanf("%d", &a[i][j]);  
			}
		}
		int start_i = 0, start_j = 0, end_i = m-1, end_j = n-1;
		while(start_i<=end_i && start_j<=end_j){
			if(start_i>end_i || start_j>end_j) break;
			for(i=start_i; i<=end_i; i++){
				printf("%d ", a[start_j][i]);
			}
			start_j = start_j + 1;
			if(start_i>end_i || start_j>end_j) break;
			for(i=start_j; i<=end_j; i++){
				printf("%d ", a[i][end_i]);
			}
			end_i = end_i - 1;
			if(start_i>end_i || start_j>end_j) break;
			for(i=end_i; i>=start_i; i--){
				printf("%d ", a[end_j][i]);
			}
			end_j = end_j - 1;
			if(start_i>end_i || start_j>end_j) break;
			for(i=end_j; i>=start_j; i--){
				printf("%d ", a[i][start_i]);
			}
			start_i = start_i + 1;
			if(start_i>end_i || start_j>end_j) break;
		}
		printf("\n");			
	}
	return 0;
} 
