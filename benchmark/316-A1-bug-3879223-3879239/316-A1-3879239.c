#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
int i,q=1,j,t,n,p=10,sum=1;
char s[7],temp;
scanf("%s",s);
n=strlen(s);
 if((int)s[0]<63)
{
q=0;
}

for(i=0;i<n-1;i++)
  {for(j=i+1;j<n;j++)
  { if((int)s[i]>(int)s[j])
           {

             temp=s[i];
             s[i]=s[j];
             s[j]=temp;
           }
  }
  }

if((int)s[0]<63)
    sum=1;
else if(s[0]=='?')
{sum=9;
}
else
{sum=9;
p=9;
}

for(i=1;i<n;i++)
{


                if(s[i]=='?')
                        sum*=10;
                else if((int)s[i]>63&&(s[i]!=s[i-1]))
                    {
                        sum=sum*p;
                        p--;
                    }

}
if(q!=0&&(int)s[0]<62)
    sum=(sum/10)*9;
printf("%d",sum);
return(0);

}
