#include <stdio.h>
#include <string.h>



int main(int argc, char *argv[])
{
    int n,m,stand=0,sit=0,status=1,step=0,index=0,i,pjg=0;
    scanf("%d",&n);
    char hams[n];
    memset(hams,0,sizeof(hams));
    scanf("%s",&hams);
    
    for(i=0;i<n;i++)
    {
        if(hams[i]=='X')
        stand++;
        else
        sit++;
    }
    
    while(status)
    {
        if(stand>sit)
        {
            if(hams[index]=='X')
            {
                hams[index]='x';
                stand--;
                sit++;
                step++;
                
            }
            
        }else if(stand<sit)
        {
            if(hams[index]=='x')
            {
                hams[index]='X';
                stand++;
                sit--;
                step++;
            }
        }
        if(stand==sit)
        {
            printf("%d\n",step);
            status=0;
            return 0;
        }
        index++;
    }
    return 0;
}