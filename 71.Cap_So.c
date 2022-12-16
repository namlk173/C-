#include<stdio.h>
int ucln(int a, int b){
	int temp;
	while(a!=0){
		temp = a;
		a = b%a;
		b = temp;
	}
	return b;
}
int main(){
	int t, a, b, c, d;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if(ucln(a,b)==ucln(c,d)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
