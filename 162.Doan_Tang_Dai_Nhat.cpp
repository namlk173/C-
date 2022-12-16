#include<stdio.h>
int main(){
	int t, i, test=1, n, j;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n], mark[n];
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
			mark[i]=1;
		}
		for(i=0; i<n-1; i++){
			if(a[i]<a[i+1]) {
				mark[i+1] = mark[i] + 1;
			}
		}
		int _max = mark[0];
		for(i=1; i<n; i++){
			_max = _max>mark[i]?_max:mark[i]; 
		}
		printf("Test %d:\n", test++);
		printf("%d\n", _max);
		for(i=0; i<n; i++){
			if(mark[i]==_max){
				for(j=i-_max+1; j<=i; j++){
					printf("%d ", a[j]);
				}		
				printf("\n");
			}

		}
	}
	return 0;
}
