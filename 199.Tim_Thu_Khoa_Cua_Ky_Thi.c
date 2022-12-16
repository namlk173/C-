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
	double _max_score = 0;
	for(i=0; i<n; i++){
		if(ts[i].diem1 + ts[i].diem2 + ts[i].diem3 > _max_score){
			_max_score = ts[i].diem1 + ts[i].diem2 + ts[i].diem3;
		}
	}
	for(i=0; i<n; i++){
		if(ts[i].diem1 + ts[i].diem2 + ts[i].diem3 == _max_score){
			printf("%d %s %s %.1lf\n", ts[i].ma, ts[i].ten, ts[i].ngaysinh, _max_score);
		}
	}
	return 0;
}
