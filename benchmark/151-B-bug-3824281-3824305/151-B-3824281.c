#include <stdio.h>

typedef struct
{
    char m_Name[21];
    int  m_taxi,m_pizza,m_girl;
} Preson_t;
Preson_t P[100];

int main(int argc, char *argv[])
{
    int N,M,a,b,c,Taxi,Pizza,Girl,i;
    char flag;
    scanf("%d",&N);
    for(i=0; i<N; ++i)
    {
        scanf("%d %s",&M,P[i].m_Name);
        while(M--)
        {
            scanf("%d-%d-%d",&a,&b,&c);
            if(a==b&&b==c&&a/10==a%10)
            {
                ++P[i].m_taxi;
            }
            else if(a>b&&b>c&&a/10!=a%10&&b/10!=b%10&&c/10!=c%10)
            {
                ++P[i].m_pizza;
            }
            else
            {
                ++P[i].m_girl;
            }
        }
    }
    Taxi=Pizza=Girl=0;
    for(i=0; i<N; ++i)
    {
        if(P[i].m_taxi>Taxi)
        {
            Taxi=P[i].m_taxi;
        }
        if(P[i].m_pizza>Pizza)
        {
            Pizza=P[i].m_pizza;
        }
        if(P[i].m_girl>Girl)
        {
            Girl=P[i].m_girl;
        }
    }
    printf("If you want to call a taxi, you should call:");
    flag=0;
    for(i=0; i<N; ++i)
    {
        if(P[i].m_taxi==Taxi)
        {
            if(flag)
            {
                printf(",");
            }
            printf(" %s",P[i].m_Name);
            flag=1;
        }
    }
    printf(".\n");
    printf("If you want to order a pizza, you should call:");
    flag=0;
    for(i=0; i<N; ++i)
    {
        if(P[i].m_pizza==Pizza)
        {
            if(flag)
            {
                printf(",");
            }
            printf(" %s",P[i].m_Name);
            flag=1;
        }
    }
    printf(".\n");
    printf("If you want to go to a cafe with a wonderful girl, you should call:");
    flag=0;
    for(i=0; i<N; ++i)
    {
        if(P[i].m_girl==Girl)
        {
            if(flag)
            {
                printf(",");
            }
            printf(" %s",P[i].m_Name);
            flag=1;
        }
    }
    printf(".\n");
    return 0;
}
