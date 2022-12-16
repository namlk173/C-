#include <stdio.h>
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int sc = 0, sl=0;
		while(n!=0){
			if((n%10)%2==0) sc = sc + 1;
			else sl = sl + 1;
			n = n/10;
		}
		printf("%d %d\n", sl, sc);
	}
	return 0;
}
