#include<stdio.h>
int main(){
	int t, i;
	scanf("%d", &t);
	getchar();
	while(t--){
		char str[201];
		gets(str);
		int n = strlen(str), count=0;
		for(i=0; i<n; i++){
			if(str[i] != str[n-1-i]) count = count + 1;
		}
		if(n%2==0){
			if(count==2) printf("YES\n");
			else printf("NO\n");
		}
		else{
			if(count<=2) printf("YES\n");
			else printf("NO\n");
		}
		
	}
	return 0;
}
