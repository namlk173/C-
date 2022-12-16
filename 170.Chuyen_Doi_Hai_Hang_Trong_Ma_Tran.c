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
			if(i==a-1) printf("%d ", arr[b-1][j]);
			else if(i==b-1) printf("%d ", arr[a-1][j]);\
			else printf("%d ", arr[i][j]); 
		}
		printf("\n");
	}
	return 0;
}
