#include<stdio.h>
int main(){
	int a,b,c,d,t;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if(c-a==d-b) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
