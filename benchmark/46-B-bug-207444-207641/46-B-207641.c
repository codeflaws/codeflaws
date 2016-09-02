#include <stdio.h>
char s[6][5]={"\0","S","M","L","XL","XXL"},ch[10]={'\0'};
long i,a[10]={0},j,left,right,o,k;
int main(int argc, char *argv[])
{
    for(i=1;i<=5;i++)
        scanf("%ld ",&a[i]);
    scanf("%ld\n",&k);
    for(i=1;i<=k;i++)
    {
        memset(ch,'\0',sizeof(ch));
        scanf("%s\n",ch+1);
        if(ch[1]=='S')
            o=1;
        else if(ch[1]=='M')
            o=2;
       else if(ch[1]=='L')
            o=3;
        else if(ch[1]=='X' && ch[2]=='L')
            o=4;
        else 
            o=5;
        for(left=o,right=o,j=1;j<=10;j++)
        {
            if(j%2 )
            {
                if(left>0 && a[left] )
                {
                    printf("%s\n",s[left]);
                    a[left]--;
                    break;
                }
                right++;
            }
            else
            {
                if(right<6 && a[right])
                {
                    printf("%s\n",s[right]);
                    a[right]--;
                    break;
                }
                left--;
            }
        }
    }
    return 0;
}
