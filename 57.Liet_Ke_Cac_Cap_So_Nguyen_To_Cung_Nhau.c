#include<stdio.h>
int ucln(int a, int b){
	int temp;
	while(a!=0){
		temp = a;
		a = b%a;
		b = temp;
	}
	if(b==1) return 1;
	return 0;
}
int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i=a; i<b; i++){
		for(j=i+1; j<=b; j++){
			if(ucln(i,j)) printf("(%d,%d)\n", i, j);
		}
	}
	return 0;
}
