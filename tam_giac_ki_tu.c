#include<stdio.h>
int main(){
	int n, i, j, k;
	scanf("%d", &n);
	for(i = 0; i<n; i++){
		int index = i*2+1;
		for(j=0; j<index; j++){
			if(i==0 || j==0|| j==index-1){
				printf("@");
			}
			else if(j<=index/2){
				printf("%c", ((j-1)*2)+1+65);
			}
			else{
				printf("%c", (index-(j)-2)*2 +1 + 65);
			}
		}
		printf("\n");
	}
	return 0;
}
