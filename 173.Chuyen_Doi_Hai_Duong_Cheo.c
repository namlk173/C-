#include<stdio.h>
int main(){
	int m, i, j;
	scanf("%d", &m);
	int a[m][m];
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			if(i==j)
				printf("%d ", a[i][m-i-1]);
			else if(i+j==m-1) printf("%d ", a[i][m-j-1]);
			else printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
