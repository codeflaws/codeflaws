#include<stdio.h>
int main(int argc, char *argv[])
{
    char s[200011],ans[200011],prev;
    scanf("%s",s);
    int i,k=0;
    prev=s[0];
    ans[k++]=s[0];
    int count=1,lcount=0;
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]==prev)
            count++;
        else
        {
            lcount=count;
            count=1;
        }
        if(!(count>2 ||(lcount>=2 && count>=2)))
            ans[k++]=s[i];
        if(lcount>=2 && count>=2)
            count=1;
        prev=s[i];
    }
    ans[k]='\0';
    printf("%s\n",ans);
    return 0;
}
