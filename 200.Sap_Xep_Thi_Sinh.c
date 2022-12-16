#include<stdio.h>
struct thisinh{
	int ma;
	char ten[1000], ngaysinh[1000];
	double diem1, diem2, diem3;
};

int main(){
	int n, i, j;
	scanf("%d", &n);
	getchar();
	struct thisinh ts[n];
	for(i=0; i<n; i++){
		ts[i].ma = i + 1;
		gets(ts[i].ten);
		gets(ts[i].ngaysinh);
		scanf("%lf", &ts[i].diem1);
		scanf("%lf", &ts[i].diem2);
		scanf("%lf", &ts[i].diem3);
		getchar();
	}
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			double _tong_diem1 = ts[i].diem1 + ts[i].diem2 + ts[i].diem3;
			double _tong_diem2 = ts[j].diem1 + ts[j].diem2 + ts[j].diem3;
			if(_tong_diem1 < _tong_diem2){
				struct thisinh temp = ts[i];
				ts[i] = ts[j];
				ts[j] = temp;
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d %s %s %.1lf\n", ts[i].ma, ts[i].ten, ts[i].ngaysinh, ts[i].diem1 + ts[i].diem2 + ts[i].diem3);
	}
	return 0;
}
