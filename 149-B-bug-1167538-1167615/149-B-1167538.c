#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define Valid(h,m) (0<=h && h<=23 && 0<=m && m<=59)
int change(char s[100],int base)
{
    int k,tol=0;
    for(k=0;k<strlen(s);k++){
        tol*=base;
        if(s[k]>=65) tol+=(int)s[k]-55;
        else tol+=(int)s[k]-48;
    }
    return tol;
}
int main(int argc, char *argv[])
{
    char time[100];
    char* ptr;
    scanf("%s",time);

    ptr=strchr(time,':');
    int k,max=0;
    for(k=0;k<strlen(time);k++){
        if(time[k]==':') continue;
        else{
            if((int)time[k]>max) max=(int)time[k];
        }
    }
    char s1[100],s2[100];
    *ptr=0;
    strcpy(s1,time);
    strcpy(s2,ptr+1);
    //printf("%s %s\n",s1,s2);
    int start;
    if(max>=65) start=max-55;
    else start=max-48;
    //printf("%d",start);
    int n1=change(s1,24),n2=change(s2,24);
    if(Valid(n1,n2))
    {
        printf("-1");
        return 0;
    }
    int sol=0;
    start++;
    for(;start<=60;start++)
    {
        n1=change(s1,start),n2=change(s2,start);
        if(Valid(n1,n2))
        {
            sol=1;
            printf("%d ",start);
        }
    }
    if(sol==0) printf("0");
    return 0;
}
