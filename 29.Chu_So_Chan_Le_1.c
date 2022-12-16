#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int sc = 0, sl=0;
	while(n!=0){
		if((n%10)%2==0) sc = sc + 1;
		else sl = sl + 1;
		n = n/10;
	}
	printf("%d %d", sl, sc);
	return 0;
}
