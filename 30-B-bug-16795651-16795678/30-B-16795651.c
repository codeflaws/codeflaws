#include <stdio.h>
int dd,mm,yy,arr[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int yer(int d,int m,int y){
    if(m>12)
    return 0;
    if(d>arr[m])
    return 0;
    if(d==29&&m==2&&y%4!=0)return 0;
    if(d+m*30+y*365<=dd+mm*30+yy*365){
        printf("YES\n");
        return 1;}
    return 0;
}
int main(int argc, char *argv[]){
    int d,m,y;
    scanf("%d.%d.%d",&dd,&mm,&yy);
	 scanf("%d.%d.%d",&d,&m,&y);
    if(yer(d,m,y))
    return 0;
    if(yer(d,y,m))
    return 0;
    if(yer(y,d,m))
    return 0;
    if(yer(y,m,d))
    return 0;
    if(yer(m,y,d))
    return 0;
    if(yer(m,d,y))
    return 0;
    printf("NO\n");
}



