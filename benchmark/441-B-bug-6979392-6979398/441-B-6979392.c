#include<stdio.h>

struct treeinf
{
    int day;
    int fruit;
};

int main(int argc, char *argv[])
{
    int tree,capacity;
    while(2==scanf("%d%d",&tree,&capacity))
    {
        struct treeinf ara[tree];
        int i,j,ans=0;
        for(i=0;i<tree;i++)
        {
            scanf("%d%d",&ara[i].day,&ara[i].fruit);
        }
        for(i=0;i<tree;i++)
        {
            struct treeinf temp;
            for(j=0;j<tree-i;j++)
            {
                if(ara[j].day>ara[j+1].day)
                {
                    temp=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=temp;
                }
            }
        }
        for(i=1,j=0;i<=ara[tree-1].day+1;i++)
        {
            int collected_fruit=0;
            while(ara[j].day<i-1) j++;
            while(collected_fruit<capacity && j<tree && ara[j].day>i)
            {
                if(capacity-collected_fruit>=ara[j].fruit)
                {
                    collected_fruit+=ara[j].fruit;
                    ara[j].fruit=0;
                }
                else{
                    ara[j].fruit-=capacity-collected_fruit;
                    collected_fruit=capacity;
                }
                if(ara[j].fruit==0) j++;
            }
            ans+=collected_fruit;
        }
        printf("%d\n",ans);
    }
    return 0;
}
