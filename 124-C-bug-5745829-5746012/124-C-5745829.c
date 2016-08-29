#include<stdio.h>
#include<string.h>
int act_pos[26],prime_no[1050],included[1050],a[26];char t[1050];
int main(int argc, char *argv[])
{
    char s[1050];int pos2=0,char_to_int,i,j;
    scanf("%s",s);
    int k=strlen(s);
    if(k==1)
    {
        printf("YES\n");
        printf("%s",s);
        return 0;
    }
    for(i=0;i<k;i++)
    {
        char_to_int=s[i]-97;
       a[char_to_int]++;
    }
    int max=a[0];
    for(i=0;i<26;i++)
    {
      if(max<a[i])
      {
          max=a[i];pos2=i;
      }
    }
    int b[k+1],m=0;
    for(i=2;i<=k;i++)
    {
      if(!prime_no[i]&&i*2<=k)
      {
          included[i-1]=1;b[m++]=i-1;
          for(j=i+1;j<=k;j++)
          {
              if(j%i==0)
              {
            prime_no[j]=1;
            if(!included[j-1])
              {
                  included[j-1]=1;
                  b[m++]=j-1;
              }
              }
             }
      }
    }
    if(max<m)
    {
        printf("NO");
        return 0;
    }
    printf("YES\n");
    char c=(char)pos2+97;
    for(i=0;i<m;i++)
        t[b[i]]=c;
        j=0;int time=0;
        i=0;
    while(i<k)
    {
        if(t[j]=='\0')
        {
        while(s[i]==c&&time++<=m&&i<k)
                       i++;
            if(i<k)
            {
                t[j]=s[i];
                j++;i++;
            }
        }
    else
    {
        while(t[j]!='\0')
            j++;
    }
    }
  for(i=0;i<k;i++)
    printf("%c",t[i]);
  return 0;
}
