#include<stdio.h>
int min(int a, int b){
	return a>b?b:a;
}
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int result =  min(a,min(b,c));
	printf("%d", result);
	return 0;
}
