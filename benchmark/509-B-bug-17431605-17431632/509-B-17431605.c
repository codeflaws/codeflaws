#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,i,j,k,d;
    int s[110];
    double b=110.0,c=0.0;
    double f;
    scanf("%d %d",&a,&d);
    for(i=1;i<=a;i++){
        scanf("%d",&s[i]);
        if(s[i]<b) b=s[i];
        if(s[i]>c) c=s[i];
    }
    c=c-b;
    f=c/d;
    //printf("%lf\n",f);
    if(f>1) printf("NO");
    else {
            printf("YES\n");
        for(i=1;i<=a;i++){
            for(j=1,k=1;j<=s[i];j++,k++){
                    if(j>d){k=1;printf("%d ",k);}
                else printf("%d ",k);
            }
            printf("\n");
        }
    }
    return 0;
}
