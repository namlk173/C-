#include<stdio.h>
void phan_tich(int n){
	int i = 2;
	while(n!=1){
		int dem = 0;
		while(n%i==0){
			dem = dem + 1;
			n = n/i;
		}
		if(dem!=0) printf(" %d(%d)", i, dem);
		i = i + 1;
	}
}
int main(){
	int t, n, i;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%d", &n);
		printf("Test %d:", i+1);
		phan_tich(n);
		printf("\n");
	}
	return 0;
}
