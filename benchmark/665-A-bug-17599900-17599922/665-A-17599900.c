#include<stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int main(int argc, char *argv[])
{
    int a,ta,b,tb,h,m,num=0,t1,t2,i,j,x,y;
    scanf("%d %d",&a,&ta);
    scanf("%d %d",&b,&tb);
    scanf("%d:%d",&h,&m);
    t1=h*60+m;
    t2=h+ta;
    for(i=5*60;i<24*60;i+=b){
        j=i+tb;
        int x = max(t1, i), y = min(t2, j);
		if (x < y)
			num++;
    }
    printf("%d\n",num);
    return 0;
}
