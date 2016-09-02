#include<stdio.h>
int main(int argc, char *argv[])
{
float vp,vd,t,f,c,t1,t2;
int cnt=0;
scanf("%f %f %f %f %f",&vp,&vd,&t,&f,&c);
float dp=c;
if(vp>=vd)
printf("0");
else
{while(dp>0)
{if(dp==c)
dp-=vp*t;
t1=(c-dp)/(vd-vp);
dp-=t1*vp;
if(dp>0)
cnt++;
t2=(c-dp)/vd+f;
dp-=t2*vp;
}}
if(cnt>0)
printf("%d",cnt);
return(0);}
