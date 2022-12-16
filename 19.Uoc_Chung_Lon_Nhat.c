#include<stdio.h>
int ucln(int a, int b){
	int temp;
	while(a!=0){
		temp = a;
		a = b%a;
		b = temp;
	}
	return b;
}
int main(){
	int number1, number2, t;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &number1, &number2);
		printf("%d\n", ucln(number1, number2));
	}
	return 0;
}
