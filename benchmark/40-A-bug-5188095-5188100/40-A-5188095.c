#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int x,y,z;
float p;
scanf("%d %d",&x,&y);
if(x==0||y==0)
{
    printf("black");
}
else
{
    p=sqrt(pow(x,2)+pow(y,2));
    z=floor(p);
    p=p-z;
    printf("%d",z);
    if(p!=0)
      {  if(x*y>0)
        {
            if(z%2==0)
                printf("black");
            else
                printf("white");
        }
        else
        {
             if(z%2!=0)
                printf("black");
            else
                printf("white");
        
        }
       }
  else
      printf("black");

}


return 0;
}