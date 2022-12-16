#include<stdio.h>
struct phanso{
	int tu, mau;
};
int __ucln(int a, int b){
	while(a!=0){
		int temp = a;
		a = b%a;
		b=temp;
	}
	return b;
}

int __bcnn(int a, int b){
	return a/__ucln(a,b) * b;
}

struct phanso rut_gon(struct phanso p){
	int ucln = __ucln(p.tu, p.mau);
	p.tu = p.tu/ucln;
	p.mau = p.mau/ucln;
	return p;
}

void __in(struct phanso p, struct phanso q){
	p = rut_gon(p), q=rut_gon(q);
	int bcnn = __bcnn(p.mau, q.mau);
	printf("%d/%d %d/%d\n", p.tu * (bcnn/p.mau) , bcnn, q.tu * (bcnn/q.mau), bcnn);
	struct phanso tong;
	tong.mau = p.mau * q.mau;
	tong.tu = p.tu * q.mau + q.tu*p.mau; 
	tong = rut_gon(tong);
	printf("%d/%d\n", tong.tu, tong.mau);
	struct phanso tich;
	tich.tu = p.tu*q.mau;
	tich.mau = p.mau*q.tu;
	tich = rut_gon(tich);
	printf("%d/%d\n", tich.tu, tich.mau);
	return;
}
int main(){
	 
	int n, test=1, i;
	scanf("%d", &n);
	struct phanso p[n], q[n];
	for(i=0; i<n; i++){
		scanf("%d%d%d%d", &p[i].tu, &p[i].mau, &q[i].tu, &q[i].mau);
	}
	for(i=0; i<n; i++){
		printf("Case #%d:\n", i+1);
		__in(p[i], q[i]);
	}
	return 0;
}
