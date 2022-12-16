#include<stdio.h>
int main(){
	int t, n, i, j;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n];
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(i=0; i<n-1; i++){
			int flag = 0;
			for(j=i+1; j<n; j++){
				if(a[i]<=a[j]){
					flag = 1;
					break;
				}
			}
			if(flag==0){
				printf("%d ", a[i]);
			}
		}
		printf("%d\n", a[n-1]);
	}
	return 0;
}
