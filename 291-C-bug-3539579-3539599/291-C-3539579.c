#include <stdio.h>
#include <string.h>
int map[100001][32];
int trans[100001]={0};
int mark[100001]={0};
int mark_value[100001]={0};
int count=0,n,k,cm;
//char result[100010];

void clear(){
    int i;
    for(i=0;i<n+1;i++){
        trans[i]=0;
        //mark[i]=0;
        mark_value[i]=-1;
    }
    //count=0;
}

void show(){
    int i,j;
    printf("%d:\n",count++);
    printf("trans:");       
    for(i=0;i<n;i++){
        printf("%d ",trans[i]);
    }
    printf("\n");
    printf("mark:");
    for(i=0;i<n;i++){
        printf("%d ",mark[i]);
    }
    printf("\n");
    printf("mark_value:");
    for(i=1;i<cm;i++){
        printf("%d ",mark_value[i]);
    }
    printf("\n");

}

void calculate(){
    int i,j,flag=1;
    for(i=0;i<32 && flag;i++){
        for(j=0;j<n;j++){
            if(mark_value[mark[j]]==-1){mark_value[mark[j]]=map[j][i];}
            else{
                if(mark_value[mark[j]]!=map[j][i]){
                    if(trans[mark[j]]==0){
                        trans[mark[j]]=cm;
                        mark_value[cm]=map[j][i];
                        mark[j]=cm++;
                        if(cm>=k+1)flag=0;
                    }else{
                        //mark_value[trans[mark[j]]]=map[j][i];
                        mark[j]=trans[mark[j]];
                    }
                }
            }
        }
    //  show();
        clear();
    }
    if(cm>k+1){
        printf("-1\n");
    }else if(cm<k+1){
        printf("-1\n");
    }else{
    //  printf("cm:%d %d\n",cm,i);
        int t=i;
        int p=i%8,q=128,sum=0;
        if(t/8==4){printf("255.255.255.255\n");}
        else{
            for(j=0;j<t/8;j++)printf("255.");
            
            while(p--){
                sum+=q;
                q/=2;
            }
            if(i%8){
                printf("%d",sum);
                j++;
            }else{
                printf("0");
                j++;
            }
            for(;j<4;j++)printf(".0");
        }

    }
}


int main(int argc, char *argv[])
{
    int a,b,c,d,i,j,tmp;
    while(scanf("%d %d",&n,&k)!=EOF){
        for(i=0;i<n;i++){
            scanf("%d.%d.%d.%d",&a,&b,&c,&d);
            for(j=7;j>=0;j--){
                map[i][j]=a%2;
                a/=2;
            }
            for(j=15;j>7;j--){
                map[i][j]=b%2;
                b/=2;
            }
            for(j=23;j>15;j--){
                map[i][j]=c%2;
                c/=2;
            }
            for(j=31;j>23;j--){
                map[i][j]=d%2;
                d/=2;
            }
        //  printf("shit:%d%d%d%d%d%d%d%d\n",map[i][0],map[i][1],map[i][2],map[i][3],map[i][4],map[i][5],map[i][6],map[i][7]);
        }
        count=1;cm=2;
        for(i=0;i<n+1;i++){
            mark[i]=1;
            mark_value[i]=-1;
        }
        calculate();
        
        for(i=0;i<n+1;i++)mark[i]=0;    
    
        clear();
    }
    
    
    return 0;
}