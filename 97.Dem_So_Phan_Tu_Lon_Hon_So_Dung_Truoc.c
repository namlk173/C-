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
		int dem = 0;
		for(i=0; i<n; i++){
			int flag = 0;
			for(j=0; j<i; j++){
				if(a[i]<a[j]){
					flag = 1;
					break;
				}
			}
			if(flag==0){
				dem = dem + 1;
			}
		}
		printf("%d\n", dem);
	}
	return 0;
}
