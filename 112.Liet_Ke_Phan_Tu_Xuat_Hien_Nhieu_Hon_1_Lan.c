#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[n], mark[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		mark[i] = 1;
	}
	for(i=0	; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]==a[j] && a[i]!=-1){
				mark[i] = mark[i] + 1;
				mark[j] = -1;
			}
		}
	}
	int count = 0;
	for(i=0; i<n; i++){
		if(mark[i]>1){
			count = count + 1;
		}
	}
	printf("%d\n", count);
	for(i=0; i<n; i++){
		if(mark[i]>1){
			printf("%d ", a[i]);
		}
	}
	
	return 0;
}
