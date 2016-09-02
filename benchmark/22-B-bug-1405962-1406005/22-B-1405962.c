#include<stdio.h>
struct node{int x,y;}a[700];
int num,n,m,i,j,k,ll,tt=0;
char map[25][25];
void getl(int i){
    int up,down,left,right;
    for(j=a[i].x-1;j>=0;j--){
                if(map[j][a[i].y]=='0')continue;
                break;
            }
            left=j+1;
            if(left==a[i].x)goto a;
            for(j=a[i].y;j<n;j++){
                for(k=left;k<a[i].x;k++){
                    if(map[k][j]=='0')continue;
                    break;
                }
                if(k==a[i].x)continue;
                break;
            }
            up=j-1;
            for(j=a[i].y;j>=0;j--){
                for(k=left;k<a[i].x;k++){
                    if(map[k][j]=='0')continue;
                    break;
                }
                if(k==a[i].x)continue;
                break;
            }
            down=j+1;
            right=a[i].x-1;
                tt=(up-down+right-left+2)*2;            
            if(tt>ll)ll=tt;
a:  for(j=a[i].x+1;j<m;j++){
                if(map[j][a[i].y]=='0')continue;
                break;
            }
            right=j-1;
            if(right==a[i].x)goto b;
            for(j=a[i].y;j<n;j++){
                for(k=right;k>a[i].x;k--){
                    if(map[k][j]=='0')continue;
                    break;
                }
                if(k==a[i].x)continue;
                break;
            }
            up=j-1;
            for(j=a[i].y;j>=0;j--){
                for(k=right;k>a[i].x;k--){
                    if(map[k][j]=='0')continue;
                    break;
                }
                if(k==a[i].x)continue;
                break;
            }
            down=j+1;
            left=a[i].x+1;
                tt=(up-down+right-left+2)*2;            
            if(tt>ll)ll=tt;
b:      for(j=a[i].y-1;j>=0;j--){
                if(map[a[i].x][j]=='0')continue;
                break;
            }
            down=j+1;
            if(down==a[i].y)goto c;
            for(j=a[i].x;j>=0;j--){
                for(k=down;k<a[i].y;k++){
                    if(map[j][k]=='0')continue;
                    break;
                }
                if(k==a[i].y)continue;
                break;
            }
            left=j+1;
            for(j=a[i].x;j<m;j++){
                for(k=down;k<a[i].y;k++){
                    if(map[j][k]=='0')continue;
                    break;
                }
                if(k==a[i].y)continue;
                break;
            }
            right=j-1;
            up=a[i].y-1;
                tt=(up-down+right-left+2)*2;            
            if(tt>ll)ll=tt;
c:      for(j=a[i].y+1;j<n;j++){
                if(map[a[i].x][j]=='0')continue;
                break;
            }
            up=j-1;
            if(up==a[i].y)goto d;
            for(j=a[i].x;j>=0;j--){
                for(k=up;k>a[i].y;k--){
                    if(map[j][k]=='0')continue;
                    break;
                }
                if(k==a[i].y)continue;
                break;
            }
            left=j+1;
            for(j=a[i].x;j<m;j++){
                for(k=up;k>a[i].y;k--){
                    if(map[j][k]=='0')continue;
                    break;
                }
                if(k==a[i].y)continue;
                break;
            }
            right=j-1;
            down=a[i].y+1;
                tt=(up-down+right-left+2)*2;
                if(tt>ll)ll=tt;
d:;
}
int main(int argc, char *argv[]){
    while(scanf("%d %d",&n,&m)!=EOF){
        getchar();
        num=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                map[j][i]=getchar();
                if(map[j][i]=='1'){
                    a[num].x=j;
                    a[num].y=i;
                    num++;
                }
            }
            getchar();
        }
        ll=4;
        for(i=0;i<num;i++)
            getl(i);
        if(num==0)ll=(n+m)*2;
        printf("%d\n",ll);
    }
return 0;
}