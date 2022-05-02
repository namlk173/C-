#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
int t;
struct Point{
	double x,y;
};
void nhap(Point &p){
	cin>>p.x>>p.y;
}
double checkRetange(Point m, Point n, Point o){
	double a,b,c;
	a = sqrt((m.x-n.x)*(m.x-n.x)+(m.y-n.y)*(m.y-n.y));
	b = sqrt((m.x-o.x)*(m.x-o.x)+(m.y-o.y)*(m.y-o.y));
	c = sqrt((o.x-n.x)*(o.x-n.x)+(o.y-n.y)*(o.y-n.y));
	if(a+b<=c||a+c<=b||b+c<=a){
		return 0;
	}
	double S =(sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a)))/4;
	double R = (a*b*c/(4*S));
	return round(PI*R*R*1000)/1000;
}
int main(){
	Point p1,p2,p3;
	cin>>t;
	while(t--){
		nhap(p1);
		nhap(p2);
		nhap(p3);
		double x = checkRetange(p1,p2,p3);
		if(x==0){
			cout<<"INVALID";
		}
		else{
			cout<<fixed<<setprecision(3)<<x;
		}
		cout<<endl;
	}
	return 0;
}
