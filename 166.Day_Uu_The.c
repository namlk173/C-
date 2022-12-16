#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int so_chan = 0, so_le = 0, dem = 0;
		char kitu = ' ';
		int so;
		while(kitu==' '){
			scanf("%d", &so);
			dem = dem + 1;
			if(so%2==0) so_chan = so_chan + 1;
			else so_le = so_le + 1;
			kitu = getchar();
		}
		if((dem%2==0 && so_chan> so_le) || (dem%2!=0 && so_le> so_chan)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		
	}
	return 0;
} 
