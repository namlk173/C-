#include<stdio.h>
int main(){
	int t;
	char instr[10];
	scanf("%d", &t);
	while(t--){
		scanf("%s", &instr);
		if(instr[0]==instr[strlen(instr)-1]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
