#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int i,j,k,l,m,x,p=0,q,l1,l2,h=0;
    char arr[2][1000000],t;
    for(i=0;i<2;i++)
    scanf("%s",arr[i]);
    l1=strlen(arr[0]);
    l2=strlen(arr[1]);
    if(l1!=l2)
    printf("NO");
    else
    {
        i=0;
        while(i<l1)
        {
            if(arr[0][i]!=arr[1][i])
            {
                j=i+1;
                while(arr[0][j]!='\0')
                {
                    x=0;
                    if(arr[1][i]==arr[0][j])
                    {
                        t=arr[0][j];
                        arr[0][j]=arr[0][i];
                        arr[0][i]=t;
                        x=1;
                    }
                    if(x==1)
                    break;
                    j++;
                }
            }
                if(x==1)
                    break;
        i++;
        }
            k=0;
    while(k<l1)
    {
        if(arr[0][k]!=arr[1][k])
        p=1;
        k++;
    }
    if(p==1)
    printf("NO");
    else
    printf("YES");
    }

return 0;
}