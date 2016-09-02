#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int no,k,i,count,a,flag,j;char arr[2000];
    scanf("%d",&no);
    scanf("%s",arr);
    k=strlen(arr);
    if(k<4)
     printf("0");

    else
     {  count=0;
        for(a=no;a<k;a+=no)
          { flag=1;
            for(j=a-3;j<a-1;j++)
             {
                 if(arr[j]!=arr[j+1])
                  flag=0;

             }
            if(flag)
             count++;

          }

       printf("%d",count);
     }


 return 0;
}

