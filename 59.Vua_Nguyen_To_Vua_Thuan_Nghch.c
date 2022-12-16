#include<stdio.h>
#include<math.h>
int snt(int n){
	if(n<2) return 0;
	int i, x=sqrt(n);
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int so_thuan_nghich(int n){
	int temp = n, stn=0;
	while(temp!=0){
		stn = stn*10 + (temp%10);
		temp = temp/10;
	}
	if(stn==n) return 1;
	return 0;
}
int main(){
	int a, b, t, i;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &a, &b);
		int dem = 0;
		for(i=a; i<=b; i++){
			if(snt(i) && so_thuan_nghich(i)) {
				printf("%d ", i);
				dem = dem + 1;
				if(dem%10==0){
					printf("\n");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
