#include<stdio.h>
int so_dep_dau_cuoi(char number[]){
	int n = strlen(number), i;
	if((number[0]-'0')*2==(number[n-1]-'0') || (number[0]-'0')==(number[n-1]-'0')*2) return 1;
	return 0;
}
int so_dep_thuan_nghich(char number[]){
	int n = strlen(number), i;
	for(i=1; i<n-1; i++){
		if(number[i]!=number[n-i-1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	char number[20];
	scanf("%d", &t);
	while(t--){
		scanf("%s", &number);
		if(so_dep_dau_cuoi(number) && so_dep_thuan_nghich(number)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
