#include<stdio.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
        char s;
    int l=0;
    scanf("%c",&s);
    while(s!='@')
    {
        if(isalnum(s) || s=='_') l++;   
        else {printf("NO");return 0;}      
        scanf("%c",&s);
    }
    if(l>16 || l==0) {printf("NO");return 0;}
    l=0;
    scanf("%c",&s);
     while(!(s=='/' || s=='\n'))
    {
        if(isalnum(s) || s=='_' || s=='.') 
            {
                l++;
                if(s=='.')
                    {
                    scanf("%c",&s);
                    if(s=='.' || s=='\n' || s=='/'){printf("NO");return 0;}
                    else continue;
                    }
            }   
        else {printf("NO");return 0;}      
        scanf("%c",&s);
    }
    if(l>32 || l==0) {printf("NO");return 0;}
    l=0;  
    if(s=='/')
{   scanf("%c",&s);
 while(s!='\n')
    {
        
        if(isalnum(s) || s=='_') l++;   
        else {printf("NO");return 0;}      
            scanf("%c",&s);
    }
        if(l>16 || l==0) {printf("NO");return 0;}
}
 printf("YES");
 return 0;
}