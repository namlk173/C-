#include<stdio.h>
int main(){
	int t, test = 1, i, j, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n], b[n];
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(i=0; i<n; i++){
			scanf("%d", &b[i]);
		}
		for(i=0; i<n-1; i++){
			for(j=i+1; j<n; j++){
				if(a[i]>a[j]){
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for(i=0; i<n-1; i++){
			for(j=i+1; j<n; j++){
				if(b[i]<b[j]){
					int temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}
			}
		}
		printf("Test %d:\n", test++);
		for(i=0; i<2*n; i++){
			if(i%2==0){
				printf("%d ", a[i/2]);
			}
			else{
				printf("%d ", b[i/2]);
			}
		}
		printf("\n");
	}
	return 0;
}
