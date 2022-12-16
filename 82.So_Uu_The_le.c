#include<stdio.h>
int so_le(char number[]){
	int n = strlen(number);
	if((number[n-1]-'0')%2==1) return 1;
	return 0;
}
int uu_the_le(char number[]){
	int n = strlen(number);
	int le = 0, i;
	for(i=0; i<n; i++){
		if((number[i]-'0')%2==1) le = le + 1;
 	}
 	if(le>(n-le)) return 1;
 	return 0;
}
int main(){
	int t;
	char number[20];
	scanf("%d", &t);
	while(t--){
		scanf("%s", &number);
		if(so_le(number), uu_the_le(number)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
