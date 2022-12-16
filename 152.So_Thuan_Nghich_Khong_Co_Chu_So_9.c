#include<stdio.h>
int _so_thuan_nghich_khong_co_9(int n){
	int __so_thuan_nghich = 0, temp=n;
	while(n!=0){
		if(n%10==9) return 0;
		__so_thuan_nghich = __so_thuan_nghich * 10 + n%10;
		n = n/10;
	}
	return (__so_thuan_nghich==temp);
}
int main(){
	int n, i;
	scanf("%d", &n);
	int dem = 0;
	for(i=2; i<n; i++){
		if(_so_thuan_nghich_khong_co_9(i)){
			printf("%d ", i);
			dem = dem + 1;
		}
	}
	printf("\n%d", dem);
	return 0;
}
