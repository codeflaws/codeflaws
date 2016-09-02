#include <stdio.h>
#define max 100

int comp(const void*a,const void*b)
{
    return *(int*)b-*(int*)a;
}

int main(int argc, char *argv[])
{
    int n,k;
    int pile[max]={0},pilecopy[max]={0};
//    int sum=0,tall[max]={0},sub[max]={0};
    int i=0,j=0,t=0,tall=0;
//    int m=0,l=0,t=-1,tp=-1;

    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&pile[i]);
        pilecopy[i]=pile[i];
    }

    qsort(pile,n,sizeof(int),comp);
    for(i=n-1;i>0;i--){
        if(pile[i-1]>pile[i])
            break;
    }
    tall=pile[i]+1;
    if(pile[0]-tall+1>k){
        printf("No\n");
        return 0;
    }
    else{
        for(i=0;i<n;i++){
            if(pilecopy[i]<=tall){
                for(j=0;j<pilecopy[i];j++)
                    printf("1 ");
            }
            else{
                for(j=0;j<tall;j++)
                    printf("1 ");
                t=2;
                for(j=tall;j<pilecopy[i];j++){
                    printf("%d ",t++);
                }
            }
            printf("\n");
        }
    }




/*
    for(i=n-1;i>0;i--){
        if(pile[i-1]>pile[i]){
            sum+=1;
            if(t==-1){
                sub[++t]=pile[i-1];
            }
            else{
                sub[++t]=pile[i-1]-pile[i];
            }
            if(tp==-1){
                tall[++tp]=pile[i-1];
            }
            else{
                tall[++tp]=tall[tp-1]+pile[i-1]-pile[i];
            }
        }
    }
    if(sum>k){
        printf("NO\n");
        return 0;
    }
    else{
        printf("YES\n");

        for(i=0;i<n;i++){
            for(j=0;j<=tp;j++){
                if(pilecopy[i]<=tall[j])
                    break;
            }
            if(j>0){
                for(m=0;m<j;m++){
                    for(l=0;l<sub[m];l++){
                        printf("%d ",m+1);
                    }
                }
                for(m=0;m<pilecopy[i]-tall[j-1];m++)
                    printf("%d ",j+1);
            }
            else{
                for(m=0;m<pilecopy[i];m++){
                    printf("%d ",1);
                }
            }
            printf("\n");
        }
    }
*/
    return 0;
}
