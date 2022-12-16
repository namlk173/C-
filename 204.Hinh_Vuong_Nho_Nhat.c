#include<stdio.h>
#include<math.h>

int main(){
	int x1, y1, x2, y2;
	int x3, y3, x4, y4;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	scanf("%d%d%d%d", &x3, &y3, &x4, &y4);
	int min_x = x1<x2? (x1 < x3 ? (x1 < x4 ? (x1) : (x4)): (x3 < x4 ? (x3) : x4) ) : (x2<x3?(x2 < x4? (x2): (x4)): (x3 < x4? (x3): x4));
	int min_y = y1<y2? (y1 < y3 ? (y1 < y4 ? (y1) : (y4)): (y3 < y4 ? (y3) : y4) ) : (y2<y3?(y2 < y4? (y2): (y4)): (y3 < y4? (y3): y4));
	int max_x = x1>x2? (x1 > x3 ? (x1 > x4 ? (x1) : (x4)): (x3 > x4 ? (x3) : x4) ) : (x2>x3?(x2 > x4? (x2): (x4)): (x3 > x4? (x3): x4));
	int max_y = y1>y2? (y1 > y3 ? (y1 > y4 ? (y1) : (y4)): (y3 > y4 ? (y3) : y4) ) : (y2>y3?(y2 > y4? (y2): (y4)): (y3 > y4? (y3): y4));
	int height = abs(max_y - min_y); 
	int width = abs(max_x - min_x);
	int edge = height>width?height:width;
	printf("%d", edge*edge);
	return 0;
}
