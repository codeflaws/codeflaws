#include<stdio.h>
   int main(int argc, char *argv[])
{
  int n,a[100],c1=0,c2=0,c3=0,p=0,i;
  scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++)
{
   p++;
 if(p==1)
c1=c1+a[i];
if(p==2)
c2=c2+a[i];
if(p==3)
c3=c3+a[i];
if(p>=3)
p=0;
}
printf("%d\t%d\t%d",c1,c2,c3);
   if((c1>c2&&c1>c3)||(c1>c2&&c1>c3&&c2==c3))
  printf("chest");
else if((c2>c1&&c2>c3)||(c2>c1&&c2>c3&&c1==c3))
  printf("biceps");
else  if((c3>c1&&c3>c2)||(c3>c1&&c3>c2&&c1==c2))
  printf("back");
else
printf("unambiguous");
return 0;
}
