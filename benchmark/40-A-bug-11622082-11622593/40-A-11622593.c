#include<stdio.h>
int main(int argc, char *argv[])
{int x,y,i=0;
scanf("%d %d",&x,&y);
while(((x*x)+(y*y)-(i*i))>=0)
i++;
if((x*x+y*y)==(i-1)*(i-1))
printf("black");
else
{if(x==0||y==0)
printf("black");
else
{if(x>0&&y>0)
{if(i%2==0)
printf("white");
else
printf("black");
}
if(x<0&&y<0)
{if(i%2==0)
printf("white");
else
printf("black");
}
if(x>0&&y<0)
{if(i%2==0)
printf("black");
else
printf("white");
}
if(x<0&&y>0)
{if(i%2==0)
printf("black");
else
printf("white");
}}
}
return 0;
}