#include<stdio.h>
int check_valid(char number[]){
	int n = strlen(number), i;
	if(number[i]=='0') return 0;
	for(i=0; i<n; i++){
		if(!isdigit(number[i])) return 0;
	}
	return 1;
}
int so_day_du(char number[]){
	int a[10], i, n=strlen(number);
	for(i=0; i<10; i++){
		a[i] = 0;
	}
	for(i=0; i<n; i++){
		a[number[i]-'0'] += 1;
	}
	for(i=0; i<10; i++){
		if(a[i] == 0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char number[1001];
		scanf("%s", &number);
		if(!check_valid(number)) printf("INVALID\n");
		else{
			if(so_day_du(number)) printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}
