#include<stdio.h>
#include<math.h>
int so_nguyen_to(int n){
	if(n<2) return 0;
	int i, x=sqrt(n);
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int all_nguyen_to(int n){
	if(!so_nguyen_to(n)) return 0;
	while(n!=0){
		if(!so_nguyen_to(n%10)) return 0;
		n = n/10;
	}
	return 1;
}
int find_result(int a, int b){
	int i, dem=0;
	for(i=a; i<=b; i++){
		if(all_nguyen_to(i)) dem = dem + 1;
	}
	return dem;
}
int main(){
	int t, a, b;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &a, &b);
		printf("%d\n", find_result(a,b));
	}
	return 0;
}
