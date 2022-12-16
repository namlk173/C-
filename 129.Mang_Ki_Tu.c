#include<stdio.h>
int check(char s[]){
	int a[5] = {0};
	int n = strlen(s), i;
	for(i=0; i<n; i++){
		switch(s[i]){
			case '(':
				a[0] = a[0] + 1;
				break;
			case ')':
				a[0] = a[0] - 1;
				break;
			case '{':
				a[1] = a[1] + 1;
				break;
			case '}':
				a[1] = a[1] - 1;
				break;
			case '[':
				a[2] = a[2] + 1;
				break;
			case ']':
				a[2] = a[2] - 1;
				break;
			case '\'':
				a[3] = a[3] + 1;
				break;
			case '"':
				a[4] = a[4] + 1;
				break;
			default:
				break;
		}
	}	
	if(a[0]!=0||a[1]!=0||a[2]!=0||a[3]%2!=0||a[4]%2!=0){
		return 0;
	}
	return 1;
}
int main(){
	char s[1000];
	gets(s);
	printf("%d\n", check(s));
	return 0;
} 
