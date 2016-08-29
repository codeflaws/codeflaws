#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
   // string s;
//    cin>>s;
    char s[200];
    gets(s);
    int len = strlen(s),flag=0,count=0;
    int i = len-1;
    while(i)
    {
        if(s[i]>=97 && s[i]<=122 || s[i]>=65 && s[i]<=90)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'
               ||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
            {
                //cout<<s[i]<<endl;
                //printf("%c \n",s[i]);
                flag=1;
                break;
            }
            else
            {
                //printf("%c \n",s[i]);
                break;
            }
        }
        i--;
    }
    if(flag)
        printf("YES");
    else
        printf("NO");
    return 0;
}
