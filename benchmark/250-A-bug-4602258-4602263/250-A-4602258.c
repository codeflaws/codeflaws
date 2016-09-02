#include<stdio.h>
int main(int argc, char *argv[])
{
int a,b,i,j=1,count=0,pos=0,neg=0;
int fol[100];
for(i=0;i<100;i++)
{
    fol[i]=0;
}
scanf("%d",&a);
int arr[a];
for(i=0;i<a;i++)
scanf("%d",&arr[i]);
for(i=0;i<a;i++)
{
    if(neg==2&&arr[i]<0)
    {
        j++;
    pos=0;
    neg=0;
    }
if(arr[i]>=0)
{
    pos++;
}
if(arr[i]<0&&neg<2)
{
    neg++;
}
if(neg<3)
    fol[j]++;



}
fol[j]=pos+neg;
printf("%d \n",j);
for(i=1;i<=j;i++)
printf("%d",fol[i]);
    return 0;
}

