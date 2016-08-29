#include<stdio.h>
int main(int argc, char *argv[]){
int x1,x2,x3;
int y1,y2,y3;
int a;
scanf("%d%d%d",&x1,&x2,&x3);
scanf("%d%d%d",&y1,&y2,&y3);
scanf("%d",&a);

int s,s1;
s=x1+x2+x3;
s1=y1+y2+y3;
int cnt=0;
if(a<=0 && (s1>0 || s>0))
{
    printf("NO");
    return 0;
}
while(s && a){
 s--;
cnt++;
if(cnt==5){
    cnt=0;
    a--;
}
}
if(!s && cnt!=0)
    a--;
if(a<=0 && s1>0)
{
    printf("NO");
    return 0;
}
cnt=0;
while(s1 && a){
 s1--;
cnt++;
if(cnt==10){
    cnt=0;
    a--;
}
}
if(!s1 && cnt!=0)
    a--;
if(a<=0 && s1>0)
{
    printf("NO");
    return 0;
}
printf("YES");





}

