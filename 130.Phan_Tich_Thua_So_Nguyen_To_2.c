#include<stdio.h>
void phan_tich_Thua_so_nguyen_to(int n){
	int i = 2;
	while(n!=1){
		while(n%i==0){
			if(n/i!=1){
				printf("%dx", i);
			}
			else printf("%d", i);
			n = n/i;
		}
		i = i + 1;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	phan_tich_Thua_so_nguyen_to(n);
	return 0;
}
