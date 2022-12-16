#include<stdio.h>
int so_khong_giam(char number[]){
	int i, n=strlen(number);
	for(i=0;i<n-1; i++){
		if(number[i+1]-'0' < number[i]-'0') return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char number[20];
		scanf("%s", &number);
		if(so_khong_giam(number)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
