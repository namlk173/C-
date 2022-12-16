#include<stdio.h>
int check_invalid(char number[]){
	int i, n = strlen(number);
	if(number[0]=='0') return 1;
	for(i=0; i<n; i++) if(!isdigit(number[i])) return 1;
	return 0;
}

int so_uu_the(char number[]){
	int i, n=strlen(number);
	int so_chan = 0, so_le = 0;
	for(i=0; i<n; i++){
		if((number[i]-'0')%2==0) so_chan = so_chan + 1;
		else so_le = so_le + 1; 
	}
//	printf("%d %d %d\n", so_chan, so_le, n);
	if((n%2==0&&so_chan>so_le) || (n%2!=0 &&so_le>so_chan)) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char number[1005];
		scanf("%s", &number);
		if(check_invalid(number)==1) printf("INVALID\n");
		else{
			if(so_uu_the(number)) printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}
