#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,p,a,b,c,max;
    scanf("%d",&n);
    char name[n][21];
    int taxi[100]={0},piza[100]={0},girl[100]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d %s",&p,name[i]);
        for(j=0;j<p;j++)
        {
            scanf("%d-%d-%d",&a,&b,&c);
            if(a==b && a==c && a/10==a%10)taxi[i]++;
            else if(a/10>a%10 && a%10>b/10 && b/10>b%10 && b%10>c/10 && c/10>c%10)piza[i]++;
            else girl[i]++;
        }
    }


    for(i=0;i<n;i++)printf("%d\n",piza[i]);
    max=-1;
    for(i=0;i<n;i++){if(taxi[i]>max)max=taxi[i];}
    printf("If you want to call a taxi, you should call:");
    for(i=0;i<n;i++){if(taxi[i]==max){printf(" %s",name[i]);break;}}
    for(++i;i<n;i++){if(taxi[i]==max){printf(", %s",name[i]);}}
    printf(".\n");

    max=-1;
    for(i=0;i<n;i++){if(piza[i]>max)max=piza[i];}
    printf("If you want to order a pizza, you should call:");
    for(i=0;i<n;i++){if(piza[i]==max){printf(" %s",name[i]);break;}}
    for(++i;i<n;i++){if(piza[i]==max){printf(", %s",name[i]);}}
    printf(".\n");

    max=-1;
    for(i=0;i<n;i++){if(girl[i]>max)max=girl[i];}
    printf("If you want to go to a cafe with a wonderful girl, you should call:");
    for(i=0;i<n;i++){if(girl[i]==max){printf(" %s",name[i]);break;}}
    for(++i;i<n;i++){if(girl[i]==max){printf(", %s",name[i]);}}
    printf(".");

    return 0;

}
