#include<stdio.h>
#include<math.h>
int perfect_number(long long n){
	long long tong=0, temp1=n, temp2=n, thuan_nghich=0;
	while(temp1!=0){
		tong = tong + temp1%10;
		temp1 = temp1/10;
	}
	if(tong%10!=0) return 0;
	while(temp2!=0){
		thuan_nghich = thuan_nghich * 10 + temp2%10;
		temp2 = temp2/10;
	}
	if(thuan_nghich!=n) return 0;
	return 1;
	
}
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		long long start = pow(10, n-1), i;
		long long end = pow(10, n);
		int dem = 0;
		for(i=start; i<end; i++){
			if(perfect_number(i)) dem = dem + 1;
		}
		printf("%d\n", dem);
	}
	return 0;
}
