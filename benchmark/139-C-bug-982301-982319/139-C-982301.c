#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int test(char ch[4][10000],int k)
{
    int n[4],c[4],tmp[4][2];
    n[0]=strlen(ch[0])-1;
    n[1]=strlen(ch[1])-1;
    n[2]=strlen(ch[2])-1;
    n[3]=strlen(ch[3])-1;
    c[0]=c[1]=c[2]=c[3]=1;
    tmp[0][0]=tmp[0][1]=tmp[1][0]=tmp[1][1]=tmp[2][0]=tmp[2][1]=tmp[3][0]=tmp[3][1]=k;
    while(1)
    {
        if(c[0])
        {
            if(tmp[0][0])
            {
                if(n[0]<0||n[1]<0) return -1;
                c[0]=ch[0][n[0]]==ch[1][n[1]];
                if(ch[0][n[0]]=='a'||ch[0][n[0]]=='e'||ch[0][n[0]]=='i'||ch[0][n[0]]=='o'||ch[0][n[0]]=='u')
                {
                    tmp[0][0]--;
                }
            }
            if(c[0]&&tmp[0][1])
            {
                if(n[2]<0||n[3]<0) return -1;
                c[0]=ch[2][n[2]]==ch[3][n[3]];
                if(ch[2][n[2]]=='a'||ch[2][n[2]]=='e'||ch[2][n[2]]=='i'||ch[2][n[2]]=='o'||ch[2][n[2]]=='u')
                {
                    tmp[0][1]--;
                }
            }
            if(!c[0])
            {
                tmp[0][0]=tmp[0][1]=0;
            }
        }
        if(c[1])
        {
            if(tmp[1][0])
            {
                if(n[0]<0||n[2]<0) return -1;
                c[1]=ch[0][n[0]]==ch[2][n[2]];
                if(ch[0][n[0]]=='a'||ch[0][n[0]]=='e'||ch[0][n[0]]=='i'||ch[0][n[0]]=='o'||ch[0][n[0]]=='u')
                {
                    tmp[1][0]--;
                }
            }
            if(c[1]&&tmp[1][1])
            {
                if(n[3]<0||n[1]<0) return -1;
                c[1]=ch[1][n[1]]==ch[3][n[3]];
                if(ch[1][n[1]]=='a'||ch[1][n[1]]=='e'||ch[1][n[1]]=='i'||ch[1][n[1]]=='o'||ch[1][n[1]]=='u')
                {
                    tmp[1][1]--;
                }
            }
            if(!c[1])
            {
                tmp[1][0]=tmp[1][1]=0;
            }
        }
        if(c[2])
        {
            if(tmp[2][0])
            {
                if(n[0]<0||n[3]<0) return -1;
                c[2]=ch[0][n[0]]==ch[3][n[3]];
                if(ch[0][n[0]]=='a'||ch[0][n[0]]=='e'||ch[0][n[0]]=='i'||ch[0][n[0]]=='o'||ch[0][n[0]]=='u')
                {
                    tmp[2][0]--;
                }
            }
            if(c[2]&&tmp[2][1])
            {
                if(n[2]<0||n[1]<0) return -1;
                c[2]=ch[1][n[1]]==ch[2][n[2]];
                if(ch[1][n[1]]=='a'||ch[1][n[1]]=='e'||ch[1][n[1]]=='i'||ch[1][n[1]]=='o'||ch[1][n[1]]=='u')
                {
                    tmp[2][1]--;
                }
            }
            if(!c[2])
            {
                tmp[2][0]=tmp[2][1]=0;
            }
        }
        n[0]--;
        n[1]--;
        n[2]--;
        n[3]--;
        if(!tmp[0][0]&&!tmp[0][1]&&!tmp[1][0]&!tmp[1][1]&!tmp[2][0]&!tmp[2][1])
        {
            if(c[0]&&c[1]&&c[2])
            {
                return 3;
            }
            else
            {
                if(c[0])
                {
                    return 0;
                }
                if(c[1])
                {
                    return 1;
                }
                if(c[2])
                {
                    return 2;
                }
                return -1;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int n,k;
    scanf("%d %d",&n,&k);
    char ch[4][10000];
    int i,t=-2,tmp;
    for(i=0;i<n;i++)
    {
        scanf("%s %s %s %s",ch[0],ch[1],ch[2],ch[3]);
        if(t==-2)
        {
                t=test(ch,k);
        }
        else
        {
            tmp=test(ch,k);
            if(tmp!=3&&tmp!=t&&t!=3||t==-1||tmp==-1)
            {
                printf("%s","NO");
                return 0;
            }
            t=tmp;
        }
    }
    if(t<0)
    {
        printf("%s","NO");
        return 0;
    }
    if(!t)
    {
        printf("%s","aabb");
        return 0;
    }
    if(t==1)
    {
        printf("%s","abab");
        return 0;
    }
    if(t==2)
    {
        printf("%s","abba");
        return 0;
    }
    if(t==3)
    {
        printf("%s","aaaa");
        return 0;
    }
    return 0;
}