#include<stdio.h>
void phan_tich_thua_so_nguyen_to(int n){
	printf("%d = ", n);
	int i = 2;
	while(n!=1){
		int dem = 0;
		while(n%i==0){
			dem = dem + 1;
			n = n/i;
		}	
		if(dem!=0){
			if(n!=1){
				printf("%d^%d * ", i, dem);
			}
			else{
				printf("%d^%d", i, dem);
			}
		}
		i = i + 1;
	}
} 
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		phan_tich_thua_so_nguyen_to(n);
		printf("\n");
	}
	return 0;
}
