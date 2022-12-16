#include<stdio.h>
int main(){
	int n, m, i, j, a, b;
	scanf("%d %d", &m, &n);
	int arr[m][n];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d %d", &a, &b);
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(j==a-1) printf("%d ", arr[i][b-1]);
			else if(j==b-1) printf("%d ", arr[i][a-1]);
			else printf("%d ", arr[i][j]); 
		}
		printf("\n");
	}
	return 0;
}
