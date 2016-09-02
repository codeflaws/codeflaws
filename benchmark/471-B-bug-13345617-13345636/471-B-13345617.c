#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,k,l,g,p,count[2002],a[2002],new[2002],temp,c[3],flag=0,flag1=0;
    scanf("%d",&n);
    for(i=1;i<=2000;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        count[a[i]]++;
    }
    j=0;
    p=0;
    k=0;
    for(i=1;i<=2000;i++)
    {
        if(count[i]>0)
        {
            // printf("i=%d\n",i);
            for(l=0;l<n;l++)
            {
                if(a[l]==i)
                {
                    new[p]=l;
                    p++;
                }
            }
        }
    }
    for(i=1;i<=2000;i++)
    {
        if(count[i]>1)
        {
         //   printf("i=%d\n",i);
            k++;
            if(count[i]>2 && j==0)
            {
                flag=1;
            }
            for(l=0;(l<n && j<2);l++)
            {
                    if(a[l]==i)
                    {
                        c[j]=l;
                        j++;
                        break;
                    }
            }
            if(j==2)
            {
               // printf("break\n");
                break;
            }
        }
    }
//    printf("c[0]=%d\n",c[0]);
    if(k<=1 && flag==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
        for(i=0;i<p;i++)
        {
            if(c[0]==new[i])
            {
                g=i;
            }
            printf("%d ",(new[i]+1));
        }
        printf("\n");
        temp=new[g+1];
        new[g+1]=new[g];
        new[g]=temp;
        for(i=0;i<p;i++)
        {
            if(flag==0 && c[1]==new[i])
            {
                g=i;
            }
            printf("%d ",(new[i]+1));
        }
        printf("\n");
        if(flag==0)
        {
            printf("flag=0\n");
        temp=new[g+1];
        new[g+1]=new[g];
        new[g]=temp;
        for(i=0;i<p;i++)
        {
            printf("%d ",(new[i]+1));
        }
        printf("\n");
        }
        else 
        {
            temp=new[g+2];
            new[g+2]=new[g+1];
            new[g+1]=temp;
            for(i=0;i<p;i++)
            {
                printf("%d ",(new[i]+1));
            }
            printf("\n");
        }
    }
    return 0;
}
