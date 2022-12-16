#include<stdio.h>
#include<math.h>

struct point{
	double x, y;
};

double dien_tich(struct point p1, struct point p2, struct point p3){
	double a = sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
	double b = sqrt((p1.x-p3.x)*(p1.x-p3.x) + (p1.y-p3.y)*(p1.y-p3.y));
	double c = sqrt((p3.x-p2.x)*(p3.x-p2.x) + (p3.y-p2.y)*(p3.y-p2.y));
	if(a+b<=c || c+b<=a || a+c<=b) return 0;
	double s = sqrt((a+b+c)*(a+b-c)*(-a+b+c)*(a-b+c))/4;
	return s; 
}
 
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		struct point p1, p2, p3;
		scanf("%lf%lf%lf%lf%lf%lf", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y);
		if(dien_tich(p1, p2, p3)==0) printf("INVALID\n");
		else printf("%.2lf\n", dien_tich(p1, p2, p3));
	}
	return 0;
}
