#include<stdio.h>
#include<math.h>
struct point{
	int x,y;
};
int main(){
	struct point a,b;
	double reason;
	scanf("%d %d",&a.x,&a.y);
	scanf("%d %d",&b.x,&b.y);
	int dx=a.x-b.x;
	int dy=a.y-b.y;
	reason=sqrt(dx*dx+dy*dy);
	printf("%.1f\n",reason);
	return 0;
}
