#include<stdio.h>
int check_invalid1(char number[]){
	int n = strlen(number), i;
	for(i=0; i<n; i++){
		if(number[i]!='0'&&number[i]!='8'&&number[i]!='9'&&number[i]!='1'){
			return 0;
		}
	}
	return 1;
}
int check_invalid2(char number[]){
	int n = strlen(number), i;
	for(i=0; i<n; i++){
		if(number[i]!='0'&&number[i]!='8'&&number[i]!='9'){
			return 1;
		}
	}
	return 0;
}
void in_ket_qua(char number[]){
	int n = strlen(number), i;
	int flag = 0;
	for(i=0; i<n; i++){
		if(number[i]=='0'||number[i]=='8'||number[i]=='9'){
			if(flag==0){
			}
			else{
				printf("0");
			}
		}
		else if(number[i]=='1'){
			flag = 1;
			printf("1");
		}
	}
}
int main(){
 	int t;
 	char number[20];
 	scanf("%d", &t);
 	while(t--){
 		scanf("%s", &number);
 		if(!check_invalid1(number) || !check_invalid2(number)) printf("INVALID\n");
 		else{
 			in_ket_qua(number);
 			printf("\n");
		 }
	}
}
