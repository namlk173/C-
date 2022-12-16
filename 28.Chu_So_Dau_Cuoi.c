#include <stdio.h>
int main(){
	char number[20];
	scanf("%s", &number);
	printf("%c %c", number[0], number[strlen(number)-1]);
	return 0;
}
