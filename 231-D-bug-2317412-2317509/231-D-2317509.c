#include<stdio.h>

int main(int argc, char *argv[])
{
int i,j,n,x,y,z,x1,y1,z1,a[10],loc[6][3],ans=0;
loc[0][0]=0;
loc[0][1]=
scanf("%d %d %d",&x,&y,&z);
scanf("%d %d %d",&x1,&y1,&z1);
for(i=0;i<6;i++)
 scanf("%d",&a[i]);
if((y<0))
 ans+=a[0];
//printf("1 %d\n",ans);
if((y>y1))
 ans+=a[1];
//printf("2 %d\n",ans);
if((z<0))
 ans+=a[2];
//printf("3 %d\n",ans);
if((z>z1))
 ans+=a[3];
//printf("4 %d\n",ans);
if((x<0))
 ans+=a[4];
//printf("5 %d\n",ans);
if((x>x1))
 ans+=a[5];
//printf("6 %d\n",ans);
printf("%d\n",ans);
return 0;
}
