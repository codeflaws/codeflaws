/*********************************************\
|@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|
|@@@@@  @@  @@   @@@   @@      @@  @@      @@@|
|@@@@@  @@  @@  @   @  @@  @@@@@@  @@@@@  @@@@|
|@@@@@      @@ @@@@@@@ @@    @@@@  @@@@  @@@@@|
|@@@@@  @@  @@ @     @ @@  @@@@@@  @@@  @@@@@@|
|@@@@@  @@  @@ @     @ @@  @@@@@@  @@      @@@|
|@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|
|     COMPUTER SCIENCE AND ENGINEERING        |
|^^^^^^^*******^^^^^^^^********^^^^^^^********|
|BANGABANDHU SHEIKH MUJIBUR RAHMAN SCIENCE    |
|        AND TECHNOLOGY UNIVERSITY            |
\*********************************************/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long
#define sf scanf
#define pf printf
#define end return 0
#define d double
#define f float
#define b break
#define c continue
int cmpfun(const void *a123,const *b123)
{
    return (int*)a123-(int*)b123;
    /*syntex qsort(array_name,number_of_element,size_of(int),cmpfun);*/
}
int main(int argc, char *argv[])
{
    char a[100];
    gets(a);
    int len=strlen(a);
    int i;
    int x=0;
    for(i=0; i<len; i++)
    {
        if(a[i]=='H' || a[i]=='Q' || a[i]=='+' || a[i]=='9')
        {
            pf("YES\n");
            x=1;
            b;
        }
    }
    if(x==0)
        pf("NO\n");
    end;
}
