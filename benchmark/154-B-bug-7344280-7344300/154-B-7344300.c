#include<stdio.h>
#include<string.h>
#include<math.h>

char lo[2];
int num[100010];

int main(int argc, char *argv[])
{
    int m,k;
    while(scanf("%d%d",&k,&m)!= EOF)
    {
        memset(num,0,sizeof(num));

        int i,j,n;
        for(j = 0; j < m; j ++)
        {
            scanf("%s%d",lo,&n);
            if(lo[0] == '+')
            {
                if(!num[n])
                {
                    int temp = n;
                    for(i = 2; i * i <= temp; i ++)
                    {
                        while(!(temp % i))
                        {
                            if(num[i])
                            {
                                temp = 0;
                                break;
                            }
                            else
                                temp /= i;
                        }
                        if(!temp)
                            break;
                    }
                    if(temp > 1)
                        if(num[temp])
                        {
                            i = temp;
                            temp = 0;
                        }

                    if(temp)
                    {
                        temp = n;
                        num[n] = n;
                        for(i = 2; i * i <= temp; i ++)
                        {
                            while(!(temp % i))
                            {
                                temp /= i;
                                num[i] = n;
                            }
                        }
                        if(temp > 1)
                            num[temp] = n;
                        printf("Success\n");
                    }
                    else
                        printf("Conflict with %d\n",num[i]);
                }
                else if(num[n] != n)
                    printf("Conflict with %d\n",num[n]);
                else if(num[n] == n)
                    printf("Already on\n");
            }
            else if(lo[0] == '-')
            {
                if(num[n] == n)
                {
                    num[n] = 0;
                    int temp = n;
                    for(i = 2; i * i <= temp; i ++)
                    {
                        while(!(temp % i))
                        {
                            temp /= i;
                            num[i] = 0;
                        }
                    }
                    if(temp > 1)
                        num[temp] = 0;
                    printf("Success\n");
                }
                else
                    printf("Already off\n");
            }
        }
    }
    return 0;
}




































