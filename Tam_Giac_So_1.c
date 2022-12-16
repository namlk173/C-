#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i = 0; i<n; i++){
		for(j=0; j<=i; j++){
			if(j==0 ) {
				printf("@");
			}
			else{
				printf("%c", j*2+1-2 + 65);
			}
		}
		for(j=i-1; j>=0; j--){
			if(j==0 ){
				printf("@");
			}
			else{
				printf("%c", j*2+1-2 + 65);
			}
		}
		printf("\n");
	}
	return 0;
}
