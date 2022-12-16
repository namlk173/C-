#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	long long a[n][n];
	long long fibo[n*n];
	fibo[0] = 0;
	fibo[1] = 1;
	for(i=2; i<n*n; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	int start_index1 = 0, start_index2 = 0, end_index1 = n-1, end_index2 = n-1;
	int index_fibo=0;
	while(start_index1<=end_index1 && start_index2 <= end_index2){
		for(i=start_index1; i<=end_index1; i++){
			a[start_index2][i] = fibo[index_fibo++];
		}
		start_index2 = start_index2 + 1;
		for(i=start_index2; i<=end_index2; i++){
			a[i][end_index1] = fibo[index_fibo++];
		}
		end_index1 = end_index1 - 1;
		for(i=end_index1; i>=start_index1; i--){
			a[end_index2][i] = fibo[index_fibo++];
		}
		end_index2 = end_index2 - 1;
		for(i=end_index2; i>=start_index2; i--){
			a[i][start_index1] = fibo[index_fibo++];
		}
		start_index1 = start_index1  + 1;
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%lld ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
