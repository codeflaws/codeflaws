#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int r1,c1,r2,c2,r,b,k;
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    if(r1==r2)
    {
        r=1;
        k=abs(c2-c1);
        if(abs(c1-c2)%2==0)
        b=abs(c1-c2);
        else
        b=0;
        printf("%d %d %d",r,b,k);
    }
    else if(c1==c2)
    {
        r=1;
        k=abs(r2-r1);
        if(abs(r1-r2)%2==0)
        b=2;
        else
        b=0;
        printf("%d %d %d",r,b,k);   
    }
    else
    {
        if(abs(r1-r2)==abs(c1-c2))
        {
            r=2;
            b=1;
            k=(abs(r1-r2));
            printf("%d %d %d",r,b,k);
        }
        else
        {
           if(abs(r1-r2)%2==0&&abs(c1-c2)%2==0)
           {
              r=2;
              b=2;
              if(abs(r1-r2)>abs(c1-c2))
              k=abs(r1-r2);
              else
              k=abs(c1-c2);
              printf("%d %d %d",r,b,k);
           }
           else
           {
            r=2;
            b=0;
             if(abs(r1-r2)>abs(c1-c2))
              k=abs(r1-r2);
              else
              k=abs(c1-c2);
              printf("%d %d %d",r,b,k);
           }
        }
        
    }
return 0;
}