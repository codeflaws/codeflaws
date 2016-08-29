#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
    int t;
    int a[105];
    char str[5];
}Play;
Play player[105];
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}

int find(int m,int i)
{
    int l,r,mid;
    l = 0;
    r = player[i].t-1;
    while(l <= r)
    {
        mid = (l + r) >> 1;
        if(m == player[i].a[mid])
            return 0;
        if(m < player[i].a[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    int n,i,j,k;
    int flag,t;
    while(~scanf("%d",&n))
    {
        for(i = 0;i < n;i ++)
            strcpy(player[i].str,"YES");
        for(i = 0;i < n;i ++)
        {
            scanf("%d",&t);
            player[i].t = t;
            for(j = 0; j < t; j ++)
            {
                scanf("%d",&player[i].a[j]);
            }
            qsort(player[i].a,t,sizeof(player[i].a[0]),cmp);
        }
        for(i = 0;i < n;i ++)
        {
            if(!strcmp(player[i].str,"YES"))
            {
                for(j = i + 1;j < n;j ++)
                {
                    flag = 0;
                    if(!(player[i].t < player[j].t))
                    {
                        for(k = 0; k < player[j].t;k ++)
                        {
                            if(find(player[j].a[k],i))
                                flag = 1;
                        }
                        if(!flag)
                        {
                            strcpy(player[i].str,"NO");
                            if(player[i].t == player[j].t)
                                strcpy(player[j].str,"NO");
                            break ;
                        }
                    }
                    else
                    {
                        for(k = 0;k < player[i].t;k ++)
                        {
                            if(find(player[i].a[k],j))
                                flag = 1;
                        }
                        if(!flag)
                            strcpy(player[j].str,"NO");
                    }
                }
            }
        }
        for(i = 0;i < n;i ++)
            printf("%s\n",player[i].str);
    }
    return 0;
}