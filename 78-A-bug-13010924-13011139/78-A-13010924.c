#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i,a=0,b=0,c=0,len1,len2,len3;
    char str1[101],str2[101],str3[101];
    gets(str1);
    gets(str2);
    gets(str3);
    len1=strlen(str1);
    len2=strlen(str2);
    len3=strlen(str3);
    for(i=0; i<len1; i++)
    {
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u')
        {
            a++;
            //printf("str1:%c\n",str1[i]);
        }
    }
    for(i=0; i<len2; i++)
    {
        if(str2[i]=='a' || str2[i]=='e' || str2[i]=='i' || str2[i]=='o' || str2[i]=='u')
        {
            b++;
            //printf("str2: %c\n",str2[i]);
        }
    }
    for(i=0; i<len3; i++)
    {
        if(str3[i]=='a' || str3[i]=='e' || str3[i]=='i' || str3[i]=='o' || str3[i]=='u')
        {
            c++;
            //printf("str3: %c\n",str3[i]);
        }
    }
    if(a==5 && b==7 && c==5)
    {
        printf("YES");
    }
    else
        printf("NO");

}
