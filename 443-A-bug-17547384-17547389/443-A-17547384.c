#include<stdio.h>
int main(int argc, char *argv[])
{
    char a[100];
    int i,count=0,j;
    gets(a);

    int len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]>=97 && a[i]<=122){
                       count++;
                for(j=i+1;j<len;j++){

            if(a[i]==a[j])
            {

                a[j]='0';
            }
          }
            }

        }

    printf("%d",count);
return 0;
}
