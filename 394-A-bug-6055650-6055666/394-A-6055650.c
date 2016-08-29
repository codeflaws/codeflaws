#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int a,b,c,count=0,flag=0,i=0,ans=0;
    char *ptr;
    char s[304];
    char *z;
    char p[303]="|";
    ptr=s;
    scanf("%s",s);
    while(*ptr!='+')
    {
        count++;
        ptr=ptr+1;
    }
    a=count;
    ptr=ptr+1;
    while(*ptr!='=')
    {
        flag++;
        z=ptr;
        ptr=ptr+1;
    }
    b=flag;
    ptr=ptr+1;
    while(*ptr!='\0')
    {
       ans++;
       ptr++;
    }
    c=ans;
    ptr=s;
    if(c-(a+b)==0)
        printf("%s",s);
        else if(c-(a+b)==2)
        {
           strcat(p,s);
           p[strlen(p)-1]='\0';
           printf("%s",p);
        }
        else if(c-(a+b)==-2)
        {
            if(a!=1)
            {
           strcat(s,p);
           ptr=ptr+1;
           while(*ptr!='\0')
           {
               printf("%c",*ptr);
               ptr++;
           }
        }
        else
        {
            ptr=s;
            strcat(s,p);
            while(ptr<z)
            {
                printf("%c",*ptr);
                ptr++;
            }
             ptr=ptr+1;
             while(*ptr!='\0')
             {
                 printf("%c",*ptr);
                 ptr++;
             }


        }
        }
        else
        {
            printf("impossible");
        }
        return 0;
}


