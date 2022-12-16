#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[n], mark[n];
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		mark[i] = 1;
	}
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]==a[j] && mark[i]!=-1){
				mark[i] = mark[i] + 1;
				mark[j] = -1;
			}
		}
	}
	for(i =0; i<n; i++){
		if(mark[i]!=-1){
			printf("%d %d\n", a[i], mark[i]);
		}
	}
	return 0;
}
