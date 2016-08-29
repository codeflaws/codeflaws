#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char s[100001];
    scanf("%s", s);
    //printf("%s", s);
    int i, len=strlen(s), d, m, y, days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int a[31][12][3]={0};
    for(i=0; i<len; i++)
    {
        //printf("i=%d\n", i);
        if(s[i]=='-')
            continue;
        if(s[i]<'0' || s[i]>'3')
        {
            //printf("Continuing here\n");
            continue;
        }
        if(s[i]>='0' && s[i]<='3')
        {
            if(s[i+1]>='0' && s[i+1]<='9')
            {
                d=(s[i]-'0')*10 + (s[i+1]-'0');
                //printf("dddd=%d\n", d);
                if(d>31)
                    continue;
                if(s[i+2]!='-')
                    continue;
                //i+=3;
                if(s[i+3]>='0' && s[i+3]<='1')
                {
                    if(s[i+4]>='0' && s[i+4]<='9')
                    {
                        m=(s[i+3]-'0')*10 + (s[i+4]-'0');
                        if(m>12)
                            continue;
                        if(s[i+5]!='-') 
                            continue;
                        //i+=3;
                        if(s[i+6]=='2' && s[i+7]=='0' && s[i+8]=='1')
                            if(s[i+9]>='3' && s[i+9]<='5')
                            {
                                y=(s[i+6]-'0')*1000+(s[i+7]-'0')*100+(s[i+8]-'0')*10+(s[i+9]-'0');
                                //printf("dd=%d mm=%d yyyy=%d\n", d, m, y);
                                if(m>12 || d>days[m-1] || y>2015 || y<2013)
                                    continue;
                                a[d-1][m-1][y-2013]++;
                                //printf("a[%d][%d][%d] is incremented to %d\n", d-1, m-1, y-2013, a[d-1][m-1][y-2013]);
                            }
                    }
                }
            }
        }
    }
    int ans=0, j, k, dd, mm, yy;
    for(i=0; i<31; i++)
        for(j=0; j<12; j++)
            for(k=0; k<3; k++)
                if(a[i][j][k]>ans)
                {
                    ans=a[i][j][k];
                    dd=i+1;
                    mm=j+1;
                    yy=k+2013;
                }
    printf("%d-%d-%d\n", dd, mm, yy);
    return 0;
}