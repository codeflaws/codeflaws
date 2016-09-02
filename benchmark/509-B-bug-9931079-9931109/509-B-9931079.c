#include<stdio.h>

int main(int argc, char *argv[])
{
int n,k,i,min=9999,max=-9999,j,l=1;
int a[100];
scanf("%d %d",&n,&k);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]<min)
    min=a[i];
if(a[i]>max)
    max=a[i];
}

if((max-min)>k)
printf("NO");
else{
        printf("YES\n");
for(i=0;i<n;i++)
{ l=1;
        for(j=1;j<=a[i];j++)
    {
        printf("%d ",l);
        l++;
        if(l==k)
            l=1;
    }
     printf("\n");
}
}
return 0;
}
