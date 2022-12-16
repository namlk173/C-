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
int check(int n){
	int tong = 0;
	while(n!=0){
		int temp = n%10;
		if(temp!=2 && temp!=3 && temp!=5 && temp!= 7) return 0;
		tong = tong + temp;
		n = n/10;
	}
	if(!snt(tong)) return 0;
	return 1;
}
int main(){
	int t, a, b, i;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &a, &b);
		int count = 0;
		for(i=a; i<=b; i++){
			if(snt(i)){
				if(check(i)) count = count + 1;	
			} 
		}
		printf("%d\n", count);
	}
	return 0;
}
