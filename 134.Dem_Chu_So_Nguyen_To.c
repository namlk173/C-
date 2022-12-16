#include<stdio.h>
int main(){
	char number[11];
	scanf("%s", &number);
	int n = strlen(number), i, j;
	int a[n];
	for(i=0; i<n; i++){
		a[i] = 1;
	} 
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(number[i] == number[j] && a[i]!=-1){
				a[i] = a[i] + 1;
				a[j] = -1;
			}
		}
	}
	for(i=0; i<n; i++){
		if((number[i]=='2' || number[i]== '3' || number[i]=='5' || number[i]=='7')&&a[i]!=-1){
			printf("%c %d\n", number[i], a[i]);
		}
	}
	return 0;
}
