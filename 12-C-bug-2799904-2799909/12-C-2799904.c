#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(int *a,int *b)
{
    if(*a<*b)
    return -1;
    if(*a==*b)
    return 0;
    else return 1;
}
int arr[101],count2[101];
int main(int argc, char *argv[])
{
    int n,m,i,j,sum1=0,sum2=0;
    char ch[100][33];
    int count[101]={1};
    
    
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    count[i]=1;
    for(i=0;i<n;i++)
    scanf("%d",arr+i);
    for(i=0;i<m;i++)
    scanf("%s",ch[i]);
    qsort(arr,n,sizeof(int),compare);
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
        if(!strcmp(ch[i],"?"))
        break;
        if(!strcmp(ch[i],ch[j]))
        {
            count[i]++;
            ch[j][0]='?';ch[j][1]='\0';
            count[j]=-1000;
        }
        }
    }
    int l=0;
    for(i=0;i<m;++i)
    {
        if(count[i]<0)
        continue;
        count2[l++]=count[i];
    }
    
    qsort(count2,l,sizeof(int),compare);
    for(i=0;i<l;i++)
    {
        sum1+=count2[l-1-i]*arr[i];
        sum2+=count2[l-1-i]*arr[n-1-i];
        
    }
    printf("%d %d",sum1,sum2);
    return 0;
}