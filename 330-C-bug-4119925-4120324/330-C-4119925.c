#include <stdio.h>
#define N 101
int main(int argc, char *argv[])
{
    int n, i, j, f = 0;  
    char s[N][N];
    int a[N];
    
    scanf("%d", &n);    
    for(i=0; i<n; i++)
    {
        scanf("%s",&(s[i]));
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            if(s[i][j]=='.') break;
        if(j<n) 
        {
            a[i] = j;            
        }
        else
        {
            f = 1;
            break;
        }
    }
    
    if(!f)
    {
        printf("%d\n", n);
        for(i=0; i<n; i++)
            printf("%d %d\n", i+1, a[i]+1);
    }
    else
    {
        f = 0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                if(s[j][i]=='.') break;
            if(j<n) 
            {
                a[i] = j;            
            }
            else
            {
                f = 1;
                break;
            }
        }
        
        if(!f)
        {
            printf("%d\n", n);
            for(i=0; i<n; i++)
                printf("%d %d\n", a[i]+1, i+1);
        }
        else
        {
            printf("%d\n", -1);
        }
    }
   
    return 0;
}