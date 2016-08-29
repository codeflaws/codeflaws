#include<stdio.h>
int main(int argc, char *argv[])
{
  int a,x,y,k=0,c=0,x2;
  float xc;
  scanf("%d %d %d",&a,&x,&y);
  if(a<1||a>100||x<-1000000||x>1000000||y<0||y>1000000)
    printf("-1");
  else
  {
    xc=(float)a/2;
    x2=a/2;
    if(x>-a&&x<a)
    {
      if((x!=xc&&xc!=y)||(x2%2==1&&x2!=x)||(a%2==0&&x2%2==1))
      {
      if(y%a!=0)
      {
          if(y<a&&x>-xc&&x<xc)
             printf("1");
         else
          {
                while(k<=y)
                { 
                    k=k+a;
                    c++;
                }
                if(c%2==0)
                {
                    if((a==2&&x==-xc)||(a==2&&x==xc))
                      printf("-1");
                  else
                  {
                    if(xc!=x)
                       printf("%d",c+(c/2-1));
                    else
                      printf("-1");
                  }
                }
                else 
                {                  
                          if(x!=0)
                          {
                                if(x<0&&y>a)
                                    printf("%d",c+(c/2-1));
                                else if(y>a)
                                     printf("%d",c+(c/2-1)+1);
                                 else
                                    printf("-1");
                           }
                           else
                                printf("-1");
                 }
            }
        }
      else
         printf("-1");
    }
    else
      printf("-1");
  }
    else
      printf("-1");
 }
  return 0;
}