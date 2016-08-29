#include"stdio.h"
#define inf 999999
int n,cnt1[5]={0},cnt2[5]={0};
int cal(int *cnt)
{
    int count=0;
    int y,c;
    if(cnt[1]>=cnt[2])
    {
        cnt[1] -= cnt[2];
        count += cnt[2];
        cnt[3] += cnt[2];
        cnt[2] = 0;
        y = cnt[1]/3;
        c = cnt[1]%3;
        cnt[3] += y;
        cnt[1] = c;
        count += 2*y;
        if(cnt[1]==1)
        {
            if(cnt[3]!=0)
                count ++;
            else if(cnt[4]>=2)
                count += 2;
            else
                return inf;
        }
        else if(cnt[1]==2)
        {
            if(cnt[4]==0&&cnt[3]<=1)
                return inf;
            else
                count += 2;
        }
    }
    else
    {
        cnt[2] -= cnt[1];
        cnt[3] += cnt[1];
        count += cnt[1];
        cnt[1] = 0;
        y = cnt[2]/3;
        c = cnt[2]%3;
        cnt[3] += 2*y;
        count += 2*y;
        cnt[2] = c;
        if(cnt[2]==1)
        {
            if(cnt[4]!=0)
                count ++;
            else if(cnt[3]>=2)
                count += 2;
            else
                return inf;
        }
        else if(cnt[2]==2)
            count += 2;
    }
    return count;
}

int main(int argc, char *argv[])
{
    int x,count,y,c;
    int count1=0,count2=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&x);
        cnt1[x]++;
        cnt2[x]++;
    }
    count1 = cal(cnt1);
    y = cnt2[2]/3;
    c = cnt2[2]%3;
    cnt2[3] += 2*y;
    cnt2[2] = c;
    count2 += 2*y;
    count2 += cal(cnt2);
    count = count1<count2?count1:count2;
    if(count == inf)
        printf("-1\n");
    else
        printf("%d\n",count);
    return 0;
}
