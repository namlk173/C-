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
void find_result(int n){
	int i = 0;
	while(i<=n/2){
		if(so_nguyen_to(i) && so_nguyen_to(n-i)) printf("%d %d ", i, n-i);
		i = i + 1;
	}
} 
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		find_result(n);
		printf("\n"); 
	}
	return 0;
} 
