#include <stdio.h>
#include <string.h>
#include <math.h>
#define MODE 1000000007 
int flag[1005]={0},room[1005],num[1005]={0};
int maxnum=0;//总和
int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    n;
    for(i =1;i<=n;i++)
    {
        scanf("%d",&room[i]);
    }
    int roomnum =2;
    num[1] = 0;
    num[2] = 2;
    if(n>=2)
    {
        
        while(1)
        {
            roomnum ++;
            num[roomnum] = num [roomnum -1] +2 +num [roomnum -1] - num[room[roomnum -1]];
            num [roomnum] %= MODE;
            if(roomnum == (n+1))
                break;
            
        }
    }
    printf("%d\n",num[roomnum]);
    return 0;

}