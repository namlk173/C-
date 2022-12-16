#include<stdio.h>
#include<math.h>

struct point{
	double x, y;
};

double chu_vi(struct point p1, struct point p2, struct point p3){
	double egde1 = sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
	double egde2 = sqrt((p1.x-p3.x)*(p1.x-p3.x) + (p1.y-p3.y)*(p1.y-p3.y));
	double egde3 = sqrt((p3.x-p2.x)*(p3.x-p2.x) + (p3.y-p2.y)*(p3.y-p2.y));
	if(egde1+egde2<=egde3 || egde1+egde3<=egde2 || egde2+egde3<=egde1) return -1;
	return egde1 + egde2  + egde3;
}
 
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		struct point p1, p2, p3;
		scanf("%lf%lf%lf%lf%lf%lf", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y);
		if(chu_vi(p1, p2, p3)==-1) printf("INVALID\n");
		else printf("%.3lf\n", chu_vi(p1, p2, p3));
	}
	return 0;
}
