#include<stdio.h>
#include<math.h>

int main(){
	int i;
	char number[20];
	scanf("%s", &number);
	int mark[10] = {0};
	for(i=0; i<strlen(number); i++){
		mark[(number[i]-'0')] +=1;	
	}
	for(i=0; i<10; i++){
		if(mark[i]!=0 && (i==2||i==3||i==5||i==7)){
			printf("%d %d\n", i, mark[i]);
		}
	}
	return 0;
}
