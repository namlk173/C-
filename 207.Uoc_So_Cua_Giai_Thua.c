#include<stdio.h>
int main(){
	int i, n, p, t;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &p);
		int count = 0;
		i = 1;
		while(p*i<=n){
			int temp = p*i;
			while(temp%p==0){
				count = count + 1;
				temp = temp /p;
			}
			i = i + 1;
		}
		printf("%d\n", count);
	}
	return 0;
}
