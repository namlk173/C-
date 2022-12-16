#include<stdio.h>
#include<string.h>
struct xau{
	char str[10];
};
int main(){
	int t, i, j;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d", &n);
		struct xau s[n];
		for(i=0; i<n; i++){
			scanf("%s", &s[i].str);
		}
		for(i=0; i<n-1; i++){
			for(j=i+1; j<n; j++){
				char temp[10];
				if(strcmp(s[i].str, s[j].str) == 1){
					strcpy(temp, s[i].str);
					strcpy(s[i].str, s[j].str);
					strcpy(s[j].str, temp);
				}
			}
		}
		for(i=0; i<n; i++){
			printf("%s", s[i]);
		}
		printf("\n");
	}
	return 0;
}
