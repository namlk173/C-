#include<stdio.h>
long long __min(char _number1[], char _number2[]){
	int n = strlen(_number1), m = strlen(_number2), i;
	long long number1=0, number2=0;
	for(i=0; i<n; i++){
		if(_number1[i]=='6') number1 = number1*10 + 5;
		else number1 = number1*10 + (_number1[i]-'0');
	}
	for(i=0; i<m; i++){
		if(_number2[i]=='6') number2 = number2*10 + 5;
		else number2 = number2*10 + (_number2[i]-'0'); 
	}
	return number1 + number2;
}

long long __max(char _number1[],  char _number2[]){
	int n = strlen(_number1), m = strlen(_number2), i;
	long long number1=0, number2=0;
	for(i=0; i<n; i++){
		if(_number1[i]=='5') number1 = number1*10 + 6;
		else number1 = number1*10 + (_number1[i]-'0');
	}
	for(i=0; i<m; i++){
		if(_number2[i]=='5') number2 = number2*10 + 6;
		else number2 = number2*10 + (_number2[i]-'0');
	}	
	return number1 + number2;
}

int main(){
	int t;
	scanf("%d", &t);
	char number1[20], number2[20];
	while(t--){
		scanf("%s %s", &number1, &number2);
		printf("%lld %lld\n", __min(number1, number2), __max(number1, number2));
	}
	return 0;
}
