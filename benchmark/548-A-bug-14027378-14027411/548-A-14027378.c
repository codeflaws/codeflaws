#include <stdio.h>

int main(int argc, char *argv[])
{  
    int answer=1; 
    int data[1000];
    int len=0;
    int x;
    int slov;
    int i,j;
    while((x=getchar())!='\n')
    {
        data[len++]=x;
    }
    scanf("%d",&slov);
    int k=len/slov;
    for(i=0;i<slov;i++)
    {
        for(j=0;j<k;j++)
        {
            if(data[j+i*k]!=data[k-1-j+i*k]){answer=0;}
        }
    }
    printf(answer?"YES":"NO");
    
    return 0;
}