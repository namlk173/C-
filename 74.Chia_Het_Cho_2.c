#include<stdio.h>
#include<math.h>

int uoc_chia_het_cho_2(int n){
	int i, dem = 0, x=sqrt(n);
	for(i=1; i<=x; i++){
		if(n%i==0){
			if(i%2==0){
				dem = dem + 1;
			}
			if((n/i)!=i && (n/i)%2==0){
				dem = dem + 1;
			}
		}
	} 
	return dem;	
}

int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		printf("%d\n", uoc_chia_het_cho_2(n));
	}
	return 0;
}
