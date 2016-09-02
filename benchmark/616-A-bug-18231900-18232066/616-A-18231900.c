#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    long long int i , j, k, l , ll, d1=0,d2=0,sum=0,sum2=0,m,n,c,d,e,f=0,x,y,z;

    char a[1000000] , b[1000000];

    gets(a);
    l = strlen(a);
    gets(b);
    ll = strlen(b);

    for(i=0; i<l; i++)
    {
        if(a[i]!='0')
        {
          d1++;
          if(a[i]=='1')
          {
              sum+=1;
          }
         else if(a[i]=='2')
          {
              sum+=2;
          }
         else if(a[i]=='3')
          {
              sum+=3;
          }
         else if(a[i]=='4')
          {
              sum+=4;
          }
        else  if(a[i]=='5')
          {
              sum+=5;
          }
         else if(a[i]=='6')
          {
              sum+=6;
          }
         else if(a[i]=='7')
          {
              sum+=7;
          }
         else if(a[i]=='8')
          {
              sum+=8;
          }
         else if (a[i]=='9')
          {
              sum+=9;
          }

          if(d1!=0)
          {
              for(j = i+1; j<l; j++)
              {
                  d1++;

            if(a[j]=='1')
          {
              sum+=1;
          }
         else if(a[j]=='2')
          {
              sum+=2;
          }
         else if(a[j]=='3')
          {
              sum+=3;
          }
         else if(a[j]=='4')
          {
              sum+=4;
          }
        else  if(a[j]=='5')
          {
              sum+=5;
          }
         else if(a[j]=='6')
          {
              sum+=6;
          }
         else if(a[j]=='7')
          {
              sum+=7;
          }
         else if(a[j]=='8')
          {
              sum+=8;
          }
         else if (a[j]=='9')
          {
              sum+=9;
          }
              }
              break;
          }
        }
    }

    for(c=0; c<ll; c++)
    {
        if(b[c]!='0')
        {
          d2++;
          if(b[c]=='1')
          {
              sum2+=1;
          }
         else if(b[c]=='2')
          {
              sum2+=2;
          }
         else if(b[c]=='3')
          {
              sum2+=3;
          }
         else if(b[c]=='4')
          {
              sum2+=4;
          }
        else  if(b[c]=='5')
          {
              sum2+=5;
          }
         else if(b[c]=='6')
          {
              sum2+=6;
          }
         else if(b[c]=='7')
          {
              sum2+=7;
          }
         else if(b[c]=='8')
          {
              sum2+=8;
          }
         else if (b[c]=='9')
          {
              sum2+=9;
          }

          if(d2!=0)
          {
              for(d = c+1; d<ll; d++)
              {
                  d2++;

            if(b[d]=='1')
          {
              sum2+=1;
          }
         else if(b[d]=='2')
          {
              sum2+=2;
          }
         else if(b[d]=='3')
          {
              sum2+=3;
          }
         else if(b[d]=='4')
          {
              sum2+=4;
          }
        else  if(b[d]=='5')
          {
              sum2+=5;
          }
         else if(b[d]=='6')
          {
              sum2+=6;
          }
         else if(b[d]=='7')
          {
              sum2+=7;
          }
         else if(b[d]=='8')
          {
              sum2+=8;
          }
         else if (b[d]=='9')
          {
              sum2+=9;
          }
              }
              break;
          }
        }

    }
    if(d1==0 && d2==0)
    {
        printf("=");
    }
    else if(d1==d2 && sum==sum2 && a[l-d1]==b[ll-d2])
    {
        x = l-d1; y = ll-d2;
         for(m = x+1 , n= y+1; m<l ; m++,n++)
        {
            if(a[m]>b[n])
            {
                f = 1;
                break;
            }
            else if(a[m]<b[n])
            {
                f = 2;
                break;
            }
        }
        if(f==0)
        {
              printf("=");
        }
        else if(f==1)
        {
            printf(">");
        }
        else if(f==2)
        {
            printf("<");
        }

    }
    else if(d1==d2 && a[l-d1]>b[ll-d2])
    {
        printf(">");
    }
    else if(d1==d2 && a[l-d1]<b[ll-d2])
    {
        printf("<");
    }
    else if(d1==d2 && a[l-d1]==b[ll-d2] && sum>sum2)
    {
        printf(">");
    }
    else if(d1==d2 && a[l-d1]==b[l-d2] && sum<sum2)
    {
        printf("<");
    }
    else if(d1>d2)
    {
        printf(">");
    }
    else if(d1<d2)
    {
        printf("<");
    }
    return 0;
}
