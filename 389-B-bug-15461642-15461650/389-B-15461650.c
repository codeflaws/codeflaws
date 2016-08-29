#include<stdio.h>
#include<stdlib.h>
int search();
 int x,y;
 int n;
 char str[1000][1000];
int main(int argc, char *argv[]){
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        scanf("%s",&str[i]);
    }
    int flag=1;
    int row[4]={1,1,1,2},col[4]={1,-1,0,0};
    while(flag){
        flag=search();
       // printf("%d %d\n",x,y);
        for(i=0;i<4;i++){
            if(flag==0){
                printf("YES\n");
                break;
            }
            if(x+row[i]>=0&&x+row[i]<n&&y+col[i]>=0&&y+col[i]<n&&str[x+row[i]][y+col[i]]=='#'){
             //   printf("A %d %d %d %d %c\n",x,y,x+row[i],y+col[i],str[x+row[i]][y+col[i]]);
                str[x+row[i]][y+col[i]]='.';
            }
            else{
              //  printf("%d %d %d %d %c\n",x,y,x+row[i],y+col[i],str[x+row[i]][y+col[i]]);
                printf("NO\n");
                flag=0;
                break;
            }
        }
    }
    return 0;
}

int search(){
     int i,j;
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(str[i][j]=='#'){
                str[i][j]='.';
                x=i;
                y=j;
                return 1;
            }
        }
    }
    return 0;
}
