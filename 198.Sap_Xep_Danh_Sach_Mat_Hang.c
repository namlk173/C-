#include<stdio.h>
struct mathang{
	int ma;
	char ten[10000], nhom[10000];
	double gia_ban, gia_mua;
};
int main(){
	int n, i, j;
	scanf("%d", &n);
	getchar();
	struct mathang mh[n];
	for(i=0; i<n; i++){
		mh[i].ma = i + 1;
		gets(mh[i].ten);
		gets(mh[i].nhom);
		scanf("%lf", &mh[i].gia_mua);
		scanf("%lf", &mh[i].gia_ban);
		getchar();
	}
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(mh[i].gia_ban - mh[i].gia_mua < mh[j].gia_ban - mh[j].gia_mua){
				struct mathang temp = mh[i];
				mh[i] = mh[j];
				mh[j] = temp;
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d %s %s %.2lf\n", mh[i].ma, mh[i].ten, mh[i].nhom, mh[i].gia_ban - mh[i].gia_mua);
	}
	return 0;
}
