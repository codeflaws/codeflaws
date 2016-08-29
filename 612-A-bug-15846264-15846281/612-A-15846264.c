#include <stdio.h>
#include <stdlib.h>
# include <string.h>

int main(int argc, char *argv[])
{
    int i,n,p,q,x,d,flag=0,s,rem;
    char text[101];
    scanf("%d %d %d\n",&n,&p,&q);
    for (i=0;i<n;i++)
    scanf("%c",&text[i]);
    text[n]='\0';
    rem=n%(p+q);
    if ((rem==0)&&((p+q)<=n))
    {
        flag=1;
        s=(n/(q+p));
        printf("%d\n",(s*2));
        int j=0,k,z;
        for (i=1;i<=s;i++)
        {
           for(k=j;k<(j+p);k++)
           printf("%c",text[k]);
           printf("\n");
           for(z=(p+j);z<(j+q+p);z++)
           printf("%c",text[z]);
           printf("\n");
           j=j+(p+q);
        }
    }

    else if (((n%p)==0)&&(p<=n))
    {
        flag=1;
        s=n/p;
        int j=0,k;
        printf("%d\n",s);
        for (i=1;i<=s;i++)
        {
           for(k=j;k<(i*p);k++)
           printf("%c",text[k]);
           printf("\n");
           j=j+p;
        }
    }
    else if (((n%q)==0)&&(q<=n))
    {

       flag=1;
        s=n/q;
        int j=0,k;
        printf("%d\n",s);
        for (i=1;i<=s;i++)
        {
           for(k=j;k<(i*q);k++)
           printf("%c",text[k]);
           printf("\n");
           j=j+q;
        }
    }

    else if ((rem%p==0) && (rem>=p))
    {
        flag=1;
        s=(n/(q+p));
        printf("%d\n",((s*2)+(rem/p)));
        int j=0,k,z;
        for (i=1;i<=s;i++)
        {
           for(k=j;k<(j+p);k++)
           printf("%c",text[k]);
           printf("\n");
           for(z=(p+j);z<(j+q+p);z++)
           printf("%c",text[z]);
           printf("\n");
           j=j+(p+q);
        }

     for (i=1;i<=(rem/p);i++)
        {
           for(k=j;k<(j+p);k++)
           printf("%c",text[k]);
           printf("\n");
           j=j+p;
        }
    }
    else if ((rem%q==0) && (rem>=q))
    {
        flag=1;
        s=(n/(q+p));
        printf("%d\n",((s*2)+(rem/q)));
        int j=0,k,z;
        for (i=1;i<=s;i++)
        {
           for(k=j;k<(j+p);k++)
           printf("%c",text[k]);
           printf("\n");
           for(z=(p+j);z<(j+q+p);z++)
           printf("%c",text[z]);
           printf("\n");
           j=j+(p+q);
        }

     for (i=1;i<=(rem/q);i++)
        {

           for(k=j;k<(j+q);k++)
           printf("%c",text[k]);
           printf("\n");
           j=j+q;
        }
    }
  else
  {

    int j,k,check=0;

    j=n/p;

    while ((j>0)&&(!check))
    {
        k=n-(j*p);
        if ((k%q==0)&&(k>=q))
        {
            printf("zew %d|",j);
          flag=1;
          check=1;
          s=j+(k/q);
          printf("%d\n",s);
          for (i=1;i<=j;i++)
           {
            for(x=(i-1)*p;x<(i*p);x++)
             printf("%c",text[x]);
            printf("\n");
           }
            for (d=1;d<=(k/q);d++)
           {
            for(i=(x+((d-1)*q));i<(x+((d)*q));i++)
             printf("%c",text[i]);
            printf("\n");
           }

        }
        else
        j--;
    }

  }
    if (flag==0)
        printf("-1");
    return 0;
}

