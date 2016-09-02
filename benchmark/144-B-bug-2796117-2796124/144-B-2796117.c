//check malloc for struct
//can design a better algo

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct rad{
	int x;
	int y;
	int r;
};

struct peri{
	int n;
	int b;
	int x;
	int y;
};

int main(int argc, char *argv[])
{
	int xa,ya,xb,yb,n,i,minx,maxx,miny,maxy,j,p;
	float d;
	scanf("%d%d%d%d",&xa,&ya,&xb,&yb);

	if(xb < xa)	{minx = xb; maxx = xa;}
	else		{minx = xa; maxx = xb;}
	if(yb < ya)	{miny = yb; maxy = ya;}
	else		{miny = ya; maxy = yb;}
	//printf("minx = %d maxx = %d miny = %d maxy = %d\n",minx,maxx,miny,maxy);

	scanf("%d",&n);
	struct rad *rp = malloc(n*sizeof(struct rad));
	/*int *rx = malloc(n*sizeof(int));
	int *ry = malloc(n*sizeof(int));
	int *rr = malloc(n*sizeof(int));*/	

	for(i=0;i<n;i++)	scanf("%d%d%d",&rp[i].x,&rp[i].y,&rp[i].r);
	
	p = 2*(maxx-minx+maxy-miny);
	struct peri *pe = malloc(n*sizeof(struct peri));
	/*int *pn = malloc(p*sizeof(int));
	int *pb = malloc(p*sizeof(int));
	int *px = malloc(p*sizeof(int));
	int *py = malloc(p*sizeof(int));*/

	p = 0;
	for(i=minx;i<maxx;i++)
	{
		pe[p].n = p;
		pe[p].b = 1;
		pe[p].x = i;
		pe[p].y = miny;
		//printf("pn = %d pb = %d px = %d py = %d\n",pn[i],pb[i],px[i],py[i]);
		p++;
	}

	for(i=miny;i<maxy;i++)
	{
		pe[p].n = p;
		pe[p].b = 1;
		pe[p].x = maxx;
		pe[p].y = i;
		//printf("pn = %d pb = %d px = %d py = %d\n",pn[i],pb[i],px[i],py[i]);
		p++;
	}

	for(i=maxx;i>minx;i--)
	{
		pe[p].n = p;
		pe[p].b = 1;
		pe[p].x = i;
		pe[p].y = maxy;
		//printf("pn = %d pb = %d px = %d py = %d\n",pn[i],pb[i],px[i],py[i]);
		p++;
	}
	
	for(i=maxy;i>miny;i--)
	{
		pe[p].n = p;
		pe[p].b = 1;
		pe[p].x = minx;
		pe[p].y = i;
		//printf("pn = %d pb = %d px = %d py = %d\n",pn[i],pb[i],px[i],py[i]);
		p++;
	}
	//printf("p = %d\n",p);
	/*for(i=0;i<p;i++)
	{
		printf("pn = %d pb = %d px = %d py = %d\n",pn[i],pb[i],px[i],py[i]);
	}*/

	for(i=0;i<p;i++)
	{
		for(j=0;j<n;j++)
		{
			d = ((rp[j].x-pe[i].x)*(rp[j].x-pe[i].x) + (rp[j].y-pe[i].y)*(rp[j].y-pe[i].y));
			d = sqrt(d);	
			if(d <= 1.0*rp[j].r)
			{
				//printf("i = %d j = %d\n",i,j);
				pe[i].b = 0;
				break;
			}
		}
	}

	int sum = 0;
	for(i=0;i<p;i++)	sum = sum+pe[i].b;

	printf("%d\n",sum);

	return 0;
}

