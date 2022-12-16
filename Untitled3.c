#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	int a[26] = {0};
	scanf("%s", &s);
	int n = strlen(s), i;
	for(i=0; i<n; i++){
		a[s[i]-97] = 1;
		printf("%d\n", s[i]-97);
	}
	for(i=0; i<26; i++){
		printf("%d ", a[i]);
	}
	return 0;
} 
