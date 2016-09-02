#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char str[1000001] ;
    long long i,j,z,p,len;
    z=0;
    p=1;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    { 
      for(j=i;;j++)
        {
        if((str[j]+str[j+1]-'0'-'0')   ==9)
        
        {
        z++;
        break;
        }
        else 
        {
        if((z>1)&&((z%2)==0))
        {
        p=p+z-1;
        z=0;
        break;
        }
        
        else
        {
        z=0;
        break;
        }
        }
        }
    }
    printf("%I64d",p);
    return 0;
            
}
        
        
        
