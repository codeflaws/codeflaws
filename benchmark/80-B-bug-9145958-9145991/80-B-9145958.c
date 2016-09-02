#include<stdio.h>
int main(int argc, char *argv[])
{
int h,m,degree2;
float degree1,p;
char c;
scanf("%d%c%d",&h,&c,&m);
p=(0.5*m);

if(h==12)
{
    degree1=(0+p);
}
else if(h<12)

    {degree1=(p+(h*30));
degree2=(m*6);
printf("%.1f %d",degree1,degree2);}
else if(h>12)
{


    degree1=((p+(h-12)*30));
    degree2=(m*6);
    printf("%0.1f %d",degree1,degree2);









}
return 0;



}



