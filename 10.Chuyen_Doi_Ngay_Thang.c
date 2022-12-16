#include<stdio.h>
int main(){
	int input;
	scanf("%d", &input);
	int years = input/365;
	int weeks = (input-(years*365))/7;
	int days = input-(years*365)-(weeks*7);
	
	printf("%d %d %d", years, weeks, days);
	return 0;
}
