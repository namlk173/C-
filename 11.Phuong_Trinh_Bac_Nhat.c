#include <stdio.h>
int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if(a==0 && b!=0){
		printf("Vo nghiem");
	}
	else if(a==0 && b==0){
		printf("Vo so nghiem");
	}
	else{
		printf("%0.2lf", (double)(-b)/a);
	}
	return 0;
}
