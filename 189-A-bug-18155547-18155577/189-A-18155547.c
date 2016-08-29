#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a,b,c,t[40010] = {0};
    scanf("%d %d %d %d",&n,&a,&b,&c);
    t[a] = 1;
    t[b] = 1;
    t[c] = 1;
    for(int i = 1; i <= n; i++)
    {
        if(t[i] == 1)
        {
            if(t[i + a] < t[i] + 1)
            t[i + a] = t[i] + 1; 
            if(t[i + b] < t[i] + 1)
            t[i + b] = t[i] + 1; 
            if(t[i + c] < t[i] + 1)
            t[i + c] = t[i] + 1; 
        }
    }
    printf("%d",t[n]);
return 0;
}
