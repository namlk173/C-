#include<stdio.h>
int main(){
	int t, n, i, j;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n], mark[n];
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
			mark[i] = 1;
		}
		for(i=0; i<n-1; i++){
			for(j=i+1; j<n; j++){
				if(a[i]==a[j] && mark[i] != -1){
					mark[i] = mark[i] + 1;
					mark[j] = -1;
				}
			}
		}
		int _max = mark[0];
		for(i=0; i<n; i++){
			_max = _max>mark[i]?_max:mark[i];
		}
		for(i=0; i<n; i++){
			if(mark[i]==_max) printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
