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
		int count = 0;
		for(i=0; i<n-1; i++){
			if(a[i]==a[i+1]) count = count + 1;
		}
		printf("%d\n", count);
	}
	return 0;
}
