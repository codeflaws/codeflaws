#include <stdio.h>
#include <string.h>
int number,county[99][99],n;
char s1[25],s2[25],t[10],color[10];
int main(int argc, char *argv[])
{
    scanf("%s %s %d",s1,s2,&n);
    int i,min;
    memset(county,0,sizeof(county));
    for(i=0;i<n;i++)
    {
        scanf("%d  %s %d %s",&min,t,&number,color);
        int temp;
        if(t[0] =='a')
            temp=0;
        else if(t[0]=='h')
            temp=1;
        county[temp][number]++;
        if(color[0]=='r' && county[temp][number]!=100)
        {
            county[temp][number]=100;
            if(temp==1)
                printf("%s %d %d\n",s1,number,min);
            else 
                printf("%s %d %d\n",s2,number,min);
        }
        if(county[temp][number]==2)
        {
            if(temp==1)
                printf("%s %d %d\n",s1,number,min);
            else 
                printf("%s %d %d\n",s2,number,min);
        }
    }
    return 0;
}