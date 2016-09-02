#include<stdio.h>
int A[101][101];
int main(int argc, char *argv[])
{
 int n,m,i,j,k,a,p,tem,t;
 scanf("%d%d",&n,&m);
 for(i=1; i<=n; i++)
 for(j=1; j<=m; j++)
 scanf("%d",&A[i][j]);
 a=n;
 if(a==1)
 {
     printf("%d\n",1);
     return 0;
 }
 for(i=1; i<=n; i++)
 {
     t=0;
   if(a%2!=0)
   {
    printf("%d\n",a);
   break;
   }
   else
   {
       t=0;
      // printf("sandhya\n");
    for(j=a/2,k=a/2+1; j>=1; j--)
    {
        t=0;
       // printf("dog\n");
      for(p=1; p<=m; p++)
      {
         //printf("compare\n");
        if(A[j][p]==A[k][p])
        tem=1;
        else
        {
         tem=0;
         //printf("tem1\n");
         // printf("%d\n",tem);
          printf("%d\n",a);
         break;
        }
      }
     if(tem==0){
            //printf("tem2\n");
       j=1;}
     k++;
    }
  }
  if(tem==0){
        //printf("tem3\n");
        i=n/2;
        //printf("%d\n",tem);
    break;}
  else{
    a=a/2;
    //printf("aa\n");
    }
    //if(t!=1)
   // a=a/2;
    //else
    //break;
 }
 return 0;
}
