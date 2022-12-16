#include<stdio.h>

int check_invalid(char number[]){
	int n = strlen(number), i;
	for(i=0; i<n; i++){
		if(!isdigit(number[i])) return 0;
	}
	return 1;
}

int so_uu_the_chan(char number[]){
	int n = strlen(number), i;
	if(n%2!=0) return 0;
	int so_so_chan = 0;
	for(i=0; i<n; i++){
		if((number[i]-'0')%2==0) so_so_chan  = so_so_chan + 1;
	} 	
	if(so_so_chan<=n-so_so_chan) return 0;
	return 1;
}
int so_uu_the_le(char number[]){
	int n = strlen(number), i;
	if(n%2==0) return 0;
	int so_so_le = 0;
	for(i=0; i<n; i++){
		if((number[i]-'0')%2!=0) so_so_le = so_so_le + 1;
	} 	
	if(so_so_le<=n-so_so_le) return 0;
	return 1;
}
int main(){
	int t;
	char number[1000];
	scanf("%d", &t);
	while(t--){
		scanf("%s", &number);
		if(!check_invalid(number)) printf("INVALID\n");
		else if(so_uu_the_chan(number) || so_uu_the_le(number)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
