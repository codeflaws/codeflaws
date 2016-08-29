//Bismillah-hir-rah-ma-nir-rahim(in the name of Allah)
//Thinker: Arafat Kamal Tamzid(Sylhet Engineering College)

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
    int a,c,b,d,e,f,g,h,m,n,i,j,ckk;
    scanf("%d %d", &n, &m);
    for(i=n+1;i<50;i++)
    {
        ckk=0;
        for(j=2;j<=i;j++)
        {
            c=i%j;
            if(c==0)
                ckk++;
        }
        if(ckk<2)
            break;
    }
    if(i==m)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
