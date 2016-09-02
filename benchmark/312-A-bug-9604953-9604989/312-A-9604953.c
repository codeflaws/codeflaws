#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
    {
        int n,i,j;
        char z;
        char f[5]=".alal";
        char r[5]="miao.";
        scanf("%d",&n);
        char a[100],s[5],l[5];
        scanf("%c",&z);
        while(n--)
        {
        int x,fr=0,ra=0;
        gets(a);
        x=strlen(a);
        for(i=0;i<5;i++)
        {
            s[i]=a[i];
            l[i]=a[x-1-i];
        }
        for(i=0;i<5;i++)
        {
            if(s[i]==r[i])
                continue;
            else
                break;
        }
        if(i==5)
            ra=1;

        for(i=0;i<5;i++)
        {
            if(l[i]==f[i])
                continue;
            else
                break;
        }
        if(i==5)
            fr=1;

        if(ra==1&&fr==0)
           printf("Rainbow's\n");
        else if(ra==0&&fr==1)
            printf("Fred's\n");
        else
            printf("OMG>.< I don't know!\n");
        }

        return 0;
    }
