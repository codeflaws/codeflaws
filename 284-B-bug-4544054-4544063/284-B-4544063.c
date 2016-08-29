#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int n,i,j,s=0,c=0,l=0,p=0,q=0;
    char str[200000];
    scanf("%d",&n);
  scanf("%s",str);
      for(i=0;i<n;i++)
    {
        if(str[i]=='A')
            c++;
        else if(str[i]=='F')
            p++;
        else if(str[i]=='I')
            s++;
    }
   // cout<<c;
    //cout<<p;
    //cout<<s;
    if(s==1)
    {
       printf("1");
    }
    else if(s>=2)
       printf("0");
    else
    {
    printf("%d",n-p);
    }
    return 0;


}
