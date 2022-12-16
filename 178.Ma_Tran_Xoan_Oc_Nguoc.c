#include<stdio.h>
int main(){
	int t, test=1;
	scanf("%d", &t);
	while(t--){
	int n, i, j;
	scanf("%d", &n);
	int count = n*n;
	int a[n][n];
	int start_index1 = 0, end_index1 = n, start_index2=0, end_index2=n;
	while(count>=1){
		
		for(i=start_index1; i<end_index1; i++){
			a[start_index2][i] = count--;
		}
		start_index2 = start_index2 + 1;
		for(i=start_index2; i<end_index2; i++){
			a[i][end_index1-1] = count--;
		}
		end_index1 = end_index1 -1;
		for(i=end_index1-1; i>=start_index1; i--){
			a[end_index2-1][i] = count--;
		}
		end_index2 = end_index2 -1;
		for(i=end_index2-1; i>=start_index2; i--){
			a[i][start_index1] = count--;
		}
		start_index1 = start_index1 + 1; 
		
	}
	printf("Test %d:\n", test++);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	}
	return 0;
}
