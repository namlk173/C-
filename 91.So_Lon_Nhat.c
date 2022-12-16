#include<stdio.h>
int main(){
	int t, n, i;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n];
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		int Max = a[0];
		for(i=0; i<n; i++){
			Max = a[i]>Max?a[i]:Max;
		}
		printf("%d\n", Max);
		for(i=0; i<n; i++){
			if(a[i]==Max) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
