#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int n,i,j,l=0,a[100],count0=0,b[100],temp,length;
    char str[100];
    scanf("%d",&n);
    scanf("%s",str);
    length=strlen(str);
    if(n!=0)
    {
        while(n)
    {
        if(n%10==0)
        {
            a[l++]=0;
            n=n/10;
            count0++;
        }
        else
        {
            a[l++]=n%10;
            n=n/10;
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    temp=0;
    if(count0==0)
    {
      for(i=0;str[i]!='\0';i++)
      {
          if(str[i]==a[i]+48)
          {
              temp=0;
          }
          else
          {
              temp=1;printf("WRONG_ANSWER");break;
          }
      }
      if(temp==0)
        printf("OK");
    }
    else if(count0==(l-1))
    {
        temp=0;
        for(i=0;i<l;i++)
        {
            if(str[i]=='0')
            {
                temp=0;
            }
            else

            {
                temp=1;printf("WRONG_ANSWER");break;
            }
        }
        if(temp==0)
            printf("OK");
    }
    else if(count0<(l-1))
    {
        temp=0;
        b[0]=a[count0];
        for(i=1;i<=count0;i++)
        {
            b[i]=0;
        }
        for(i=count0+1;i<l;i++)
        {
            b[i]=a[i];
        }
        for(i=0;i<l;i++)
        {
            if(str[i]==b[i]+48)
            {
                temp=0;
            }
            else
            {
                temp=1; printf("WRONG_ANSWER");
                break;
            }
        }
        if(temp==0)
            printf("OK");
    }
    }
    else if(n==0 && length==1)
    {
        if(str[0]=='0')
            printf("OK");

        else
            printf("WRONG_ANSWER");
    }
return 0;
}
