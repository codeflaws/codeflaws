#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int k,j,a,b,len,*y,n=0,i;
    char x[200];
    scanf("%d%d%d",&k,&a,&b);
    scanf("%s",x);
    len=strlen(x);
    if(len<(k*a)||len>(k*b))
          printf("No solution");
    else
    {
        y=(int *)calloc(k*b,sizeof(int));
        while(1)
        {
                     
               for(i=n;i<k*b;i=i+b)
               {
                        if(*(y+i)!=1)
                        {             *(y+i)=1;
                                      len--;
                                      if(len==0)
                                      goto end;
                        }                                                       
               }
               n++;
        }
        
    
    end:
/*    for(i=0,j=0;i<k*b;i++)
        printf("%d",*(y+i));
        printf("\n");*/
    for(i=0,j=0,n=1;i<k*b;i++)
    {            
            if(*(y+i)==1)
            {
                 printf("%c",*(x+j));
                 j++;     
            }
            if((*(y+i)==1&&*(y+i+1)==0))
            { printf("\n");n++;}
            if(i+1==n*b)
            { printf("\n");n++;}
    }
    }
     return 0;
}