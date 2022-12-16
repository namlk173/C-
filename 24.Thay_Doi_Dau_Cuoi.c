#include <stdio.h>
int main(){
	int i;
	char number[20];
	scanf("%s", &number);
	if(number[strlen(number)-1]!='0'){
		printf("%c", number[strlen(number)-1]);
	}
	for(i=1; i<strlen(number)-1; i++){
		printf("%c", number[i]);
	}
	printf("%c", number[0]);
	return 0;
}
