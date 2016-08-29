#include <stdio.h>
int days[25]={ 0,31,29,31,30,31,30,31,31,30,31,30,31,
                 31,28,31,30,31,30,31,31,30,31,30,31};
int map[25][32]={0};
void minus(int* m,int* d){
    *d = *d -1;
    if(d<=0){
        *m = *m - 1;
        *d = days[*m];
    }
}
int main(int argc,char** argv){
    int n;
    int m=0,d=0,p=0,t=0;
    int i,j,k;
    int max=-1;
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d %d",&m,&d,&p,&t);
        m+=12;
        minus(&m,&d);
        for(k=0;k<t;k++){
            map[m][d]+=p;
            minus(&m,&d);
            //printf("%d %d\n",m,d);
        }
    }
    /*for(i=0;i<25;i++){
        printf("%d ",i);
        for(j=0;j<32;j++){
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }*/
    for(i=0;i<25;i++){
        for(j=0;j<32;j++){
            if(max<map[i][j])
                max=map[i][j];
        }
    }
    printf("%d\n",max);
    return 0;
}
