#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Check(char s[],char s1[])
{
    int Loop,Count=0;

    for(Loop=0; Loop<4; Loop++)
    {
        if(s[Loop]==s1[Loop])
            Count++;
    }

    if(Count>0)
        return Count;
    else
        return 0;
}

int main(int argc, char *argv[])
{
    char s[8],s2[7]= {"jolteon"},s3[7]= {"flareon"},s4[7]= {"umbreon"},s5[7]= {"leofeon"},s6[7]= {"glaceon"},s7[7]= {"sylveon"};



    int Big,Loop,n,w1,w2,w3,w4,w5,w6,a[6],i=0,p=0;

    scanf("%d",&n);
    scanf("%s",s);


    if(n==8)
    {
        printf("vaporeon\n");
        return 0;
    }
    else if(n==6)
    {
        printf("espeon\n");
        return 0;
    }

    else
    {
        w1=Check(s,s2);
        a[i]=w1;
        i++;


        w2=Check(s,s3);
        a[i]=w2;
        i++;


        w3=Check(s,s4);
        a[i]=w3;
        i++;


        w4=Check(s,s5);
        a[i]=w4;
        i++;


        w5=Check(s,s6);
        a[i]=w5;
        i++;


        w6=Check(s,s7);
        a[i]=w6;
        i++;


        Big=a[0];

        for(Loop=0; Loop<i; Loop++)
        {
            if(Big<a[Loop])
            {
                Big=a[Loop];
                p=Loop;
            }
        }
        p=p+1;

        if(p==1)
            printf("jolteon\n");
        else if(p==2)
            printf("flareon\n");
        else if(p==3)
            printf("umbreon\n");
        else if(p==4)
            printf("leofeon\n");
        else if(p==5)
            printf("glaceon\n");
        else
            printf("sylveon\n");

    }

    return 0;
}

