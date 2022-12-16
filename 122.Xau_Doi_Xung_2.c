#include<stdio.h>

int main(){
	char str[100001];
	gets(str);
	printf("%d", strlen(str)-1);
	return 0;
}
