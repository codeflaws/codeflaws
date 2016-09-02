#include <stdio.h>

int main(int argc, char *argv[])
{
    char s[11];
    int i=0,flag=0;
    gets(s);
    while(i<11)
    {
        if(s[i]=='1')
           {
               if (s[i+1]=='4')
                {
                    if(s[i+2]=='4')
                    {
                        if(s[i+3]=='1')
                        {
                            flag=1;
                            i=i+3;
                            continue;
                        }
                        else if(s[i+3] == '\0')
                        break;
                        else
                        {
                            flag=0;
                            break;
                        }

                    }
                    else if(s[i+2]=='1')
                    {
                        flag=1;
                        i=i+2;
                        continue;
                    }
                    else if(s[i+2] == '\0')
                    break;
                    else
                    {
                        flag=0;
                        break;
                    }


                }
                else if(s[i+1] == '1')
                {
                    flag=1;
                    i=i+1;
                    continue;

                }
                else if(s[i+1] == '\0')
                break;

                else
                {
                    flag=0;
                    break;
                }
           }
           else if(s[i] == '\0')
            break;
           else
           {
               flag=0;
               break;
           }

    }

    if(flag==1)
        printf("YES");
    else
        printf("NO");
        return(0);
}
