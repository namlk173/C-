#include<stdio.h>
int main(){
	int t, m, n, i, j, test =1;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		int a[n][m];
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		int _max_row_value = a[0][0];
		for(i=0; i<n; i++){
			int _sum = 0;
			for(j=0; j<m; j++){
				_sum = _sum + a[i][j];
			}
			_max_row_value = _max_row_value>_sum?_max_row_value:_sum;
		}
		for(i=0; i<n; i++){
			int _sum = 0;
			for(j=0; j<m; j++){
				_sum = _sum + a[i][j];
			}
			if(_sum==_max_row_value){
				for(j=0; j<m; j++){
					a[i][j] = -999999;
				}
			}
		}
		int _max_col_value = -99999999;
		for(i=0; i<m; i++){
			int _sum = 0;
			for(j=0; j<n; j++){
				_sum = _sum + a[j][i];
			}
			_max_col_value = _max_col_value>_sum?_max_col_value:_sum;
		}		
		for(i=0; i<m; i++){
			int _sum = 0;
			for(j=0; j<n; j++){
				_sum = _sum + a[j][i];
			}
			if(_sum==_max_col_value){
				for(j=0; j<n; j++){
					a[j][i] = -999999;
				}
			}
		}		
		printf("Test %d:\n", test++);
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				if(a[i][j]!=-999999)
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}		
	}
	return 0;
}
