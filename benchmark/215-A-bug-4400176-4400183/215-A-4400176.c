#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,a[55],b[55],i,j,count=1,c=0,max1,k,s[55],u=0,l,p=0,temp,t;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d\n",&m);
    for(j=0;j<m;j++)
        scanf("%d",&b[j]);
        k=0;

    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            if(b[j]%a[i]==0)
            {
                c++;
                s[k]=b[j]/a[i];
                k++;
                continue;
             }
            else
                continue;
        }
    }
   // printf("\n%d\n",c);
// for(k=0;k<c;k++)
  //  printf("%d\n",s[k]);
 for(k=0;k<c;k++)
 {
     for(l=k+1;l<c;l++)
     {
         if(s[k]<=s[l])
         {
             temp=s[k];
             s[k]=s[l];
             s[l]=temp;
         }
     }

 }
 //for(k=0;k<c;k++)
   // printf("%d\n",s[k]);
 t=s[0];
 count=1;
 for(k=1;k<=c;k++)
 {
     if(s[k]==t){
        count++;continue;}
     else{
        count=count;continue;}
 }
 printf("%d",count);

      return 0;
}

