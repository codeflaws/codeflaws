#include<stdio.h>
int main(int argc, char *argv[])
{
    int x,a[12]={-1},sum=0,i=0,t=0,j=0;
    scanf("%d",&x);
    for(i=0;i<12;i++)
        scanf("%d",&a[i]);
        i=0;

   for(i=0;i<12;i++)
   for(j=i+1;j<12;j++){
       if(a[i]<a[j])
       {
           t=a[i];
           a[i]=a[j];
           a[j]=t;
       }}


    i=0;
     while(i!=12)
     {
         if(sum==x||sum>x)
            break;
         sum+=a[i];
         i++;
     }
     if(i==12)
        printf("\n%d",-1);
     else
        printf("\n%d",i);
return 0;
}
