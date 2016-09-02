#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,p,q,i,j,c,d=0,count=0,s,f=0;
    int temp1[10]={0},temp2[10]={0};
    scanf("%d %d",&n,&p);
    int ara1[p];
    for(i=0;i<p;i++){
        scanf("%d",&ara1[i]);
        temp1[i]=ara1[i];
    }
    scanf("%d",&q);
    c=p;d=q;
    int ara2[q];
    for(i=0;i<q;i++){
        scanf("%d",&ara2[i]);
        temp2[i]=ara2[i];
    }
    for(;count<=180;){
        f=0;
        count++;
        //printf("%d\n",count);
        if(temp1[0]<temp2[0]){
            s=temp2[0];
            for(j=1;j<d;j++){
                temp2[j-1]=temp2[j];
            }
            temp2[j-1]=temp1[0];
            temp2[j]=s;
            d=j+1;
            for(j=1;j<c;j++){
                temp1[j-1]=temp1[j];
            }
            c=j-1;
            temp1[j-1]=0;
            if(temp1[0]==0){
                printf("%d 2",count);
                return 0;
            }
        }
        else{
            s=temp1[0];
            for(j=1;j<c;j++){
                temp1[j-1]=temp1[j];
            }
            temp1[j-1]=temp2[0];
            temp1[j]=s;
            c=j+1;
            for(j=1;j<d;j++){
                temp2[j-1]=temp2[j];
            }
            d=j-1;
            temp2[j-1]=0;
            if(temp2[0]==0){
                printf("%d 1",count);
                return 0;
            }
        }
        for(i=0;i<c;i++){
            if(temp1[i]!=ara1[i]){
                f=1;
                break;
            }
        }
        for(i=0;i<d;i++){
            if(temp2[i]!=ara2[i]){
                f=1;
                break;
            }
        }
        if(f==0){
        printf("-1");
        return 0;
        }
    }
    printf("-1");
    return 0;
}
