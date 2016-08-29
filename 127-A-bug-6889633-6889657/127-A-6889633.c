#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[])
{
	int n,k,i;
	scanf("%d %d",&n,&k);
	int x1,x2,y1,y2;
	double ans,d;
	scanf("%d %d",&x1,&y1);
	for(i=1;i<n;i++)
	{
		scanf("%d %d",&x2,&y2);
		d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		//printf("%.9lf\n",d);
		ans += (d);
		x1 = x2;
		y1 = y2;
	}
	printf("%.9lf\n",ans/50);
	return 0;
}
