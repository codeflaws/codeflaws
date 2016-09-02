#include<stdio.h>

int main(int argc, char *argv[])
{
        int flag=0,i,c,ind;
        char a[100005],k;
        for(c=0;;c++)
        {
                scanf("%c",&k);
                if(k=='\n')
                {
                        a[c]='\0';
                        break;
                }
                else a[c]=k;
                if(k=='0')
                {
                        flag=1;
                        ind=c;
                }
        }
        for(i=0;i<c;i++)
        {
                if((flag==1&&i==ind)||(flag==0&&i==0)) continue;
                printf("%c",a[i]);
        }
        return 0;
}

