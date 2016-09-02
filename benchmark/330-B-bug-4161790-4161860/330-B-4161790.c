#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int n,m,i,a[500],b[500],c[1000],j,h;
    scanf("%d%d",&n,&m);
    if(m!=0)
    {
    for(i=0;i<m;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(i=0;i<m;i++)
    {
        c[i]=a[i];
        c[i+m]=b[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*m;j++)
        {
            if(i==c[j])
            {
                h=0;
                break;
            }
            else
                h=i;
        }
        if(h!=0)
            break;
    }
printf("%d\n",n-1);
for(i=1;i<h;i++)
printf("%d %d\n",i,h);
for(i=h+1;i<=n;i++)
printf("%d %d\n",h,i);
    }
    else if(m==0)
    {
printf("%d\n",n-1);
for(i=2;i<=n;i++)
printf("%d 1\n",i);

    }

return 0;
}
