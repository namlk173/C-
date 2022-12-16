#include<stdio.h>
#include<math.h>

int snt(int n){
	if(n<2) return 0;
	int x = sqrt(n), i;
	for(i=2; i<=x; i++){
		if(n%i==0) return 0;
	} 
	return 1;
}

int kiem_tra(int n){
	int tong = 0;
	while(n!=0){
		int temp = n%10;
		if(temp!=2 && temp!=3 && temp!=5 && temp!=7) return 0;
		else{
			tong = tong + temp;
		}
		n = n/10;
	}
	return snt(tong); 
}

int main(){
	int t, i;
	scanf("%d", &t);
	int a, b;
	while(t--){
		scanf("%d %d", &a, &b);
		int start = a>b?b:a;
		int end = a>b?a:b;
		int dem =0;
		for(i=start; i<=end; i++){
			if(snt(i)) {
				if(kiem_tra(i)) dem = dem +1;
			}
		}
		printf("%d\n", dem);
	}
	return 0;
}
