#include <stdio.h>
#include <stdlib.h>
#define MAX 9999
#define flag 99999
typedef struct
{
    int s1;
    int s2;
}Segment;
void sort(Segment*Vec,int g);
int minimum(int a1,int a2);
int maximum(int a1,int a2);
int main(int argc, char *argv[])
{
    int num;
    scanf("%d", &num);
    int NAILS[MAX],j=1,RG1,RG2;
    int left,right,minor=0;
    Segment V[num+1];
        do{
            scanf("%d%d", &RG1, &RG2);
            V[j].s1=minimum(RG1,RG2);
            V[j].s2=maximum(RG1,RG2);
            j++;
        }while(j<=num);
        sort(V,num);
        left=V[1].s1;
        right=V[1].s2;
        V[num+1].s1=flag;
        j=2;
        while(j<=num+1)
        {
            if(V[j].s1>right)
            {
                NAILS[minor++]=right;
                left=V[j].s1;
                right=V[j].s2;
            }
            else
            {
                if(V[j].s1>left)
                {
                    left=V[j].s1;
                }
                if(V[j].s2<right)
                {
                    right=V[j].s2;
                }
            }
        j++;
        }
        printf("%d\n",minor);
        for(j=1; j<=minor; j++)
        {
            printf("%d ",NAILS[j]);
        }
        return 0;
}
void sort(Segment *Vec,int g)
{
    int j=0;
    do
    {
    j++;
        int k=j;
        while(k<=g)
        {
            k++;
            if(Vec[j].s1!=Vec[k].s1)
            {
                if(Vec[j].s1>Vec[k].s1)
                {
                   Segment tmp=Vec[j];
                    Vec[j]=Vec[k];
                    Vec[k]=tmp;
                }
            }
            else
            {
                if(Vec[j].s2>Vec[k].s2)
                {
                    Segment tmp=Vec[j];
                    Vec[j]=Vec[k];
                    Vec[k]=tmp;
                }
            }
        }
    }while(j<=g-1);
}
int minimum(int a1,int a2)
{
    if(a1<a2)
    {
        return a1;
    }
    else
    {
        return a2;
    }
}
int maximum(int a1,int a2)
{
    if(a1<a2)
    {
        return a2;
    }
    else
    {
        return a1;
    }
}

