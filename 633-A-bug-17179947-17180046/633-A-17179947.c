#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,x,y,i,k,cnt=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b==c)
        printf("Yes");
    else if(a%2==0 && b%2==0 && c%2!=0)
        printf("No");
    else if(a+b>c)
    {
        if(c%a==0 || c%b==0)
            printf("Yes");
        else
            printf("No");
    }
    else if(a+b<c)
    {
        if(c%a==0 || c%b==0)
            printf("Yes");
        else if(c%a!=0 && c%b!=0)
        {
            if(b>=a)
            {
                x=b;
                y=a;
            }
            else
            {
                x=a;
                y=b;
            }
            int m=c/x;

           for(i=0;i<=m;i++)
           {
                k=(c-(y*i))%x;
                if(k==0)
                   {
                       printf("Yes");
                        break;
                   }


        }
        if(k!=0)
            printf("No");
    }
}
return 0;
}