#include <stdio.h>
#include <stdlib.h>

#define eps 0.000000001

//int n=15;

typedef struct seq_ seq;

struct seq_
{
    int *arr;
    int n;
};

seq *MakeSeq(int n)
{
    seq *s;
    s = (seq *) malloc(sizeof(seq));
    s->arr = (int *) malloc(sizeof(int)*n);
    s->n=n;
    return s;
}

seq *Refuel(double alpha, int n)
{
    seq *s;
    int c;

    s = MakeSeq(n);

    for( c = 1; c <= s->n; c++ )
    {
        s->arr[c-1] = ((alpha*c)/10);
    }
    return s;

}

/*double Refuel(double alpha, int *arr,int n)
{
    double fuel=0;
    int c,c2=0;

    for(c = 1; c < n; c++)
    {

        if( fuel < 10 )
        {

            //printf("refuel on %i needed , fuel = %f", c , fuel);
            fuel+=alpha;
            arr[c2] = c;
            c2++;

           printf("now have %f\n",fuel );
        }

        fuel-=10;
        //printf("-10 of fuel, now %f\n",fuel);
    }

  return fuel;
}*/

void PrintSeq(seq *s)
{
    int c;
    for( c=0; c < s->n; c++)
    {
        printf("%i ",s->arr[c]);
    }
    printf("\n");
}


int CmpSeq(seq *s1, seq *s2,int eqc)
{
    int c;
    int n;

    if( s1->n < s2->n) n = s1->n;
    else n = s2->n;

    for( c = 0; c < n; c++ )
    {

     if( s1->arr[c] > s2->arr[c]) return 1;
     if( s1->arr[c] < s2->arr[c]) return -1;

    }
    return eqc;
}



seq *ReadSeq(FILE *f)
{
    int na,c;
    seq *s;
    fscanf(f,"%i",&na);
    s = MakeSeq(na);

    for( c = 0; c < na; c++ )
    {

        fscanf(f,"%i ", s->arr +c);

    }
    return s;

}


double FindMaxAlpha(seq *s)
{
  return  (s->arr[2] - s->arr[1] + 1)*10;
}


double mpd(double a, double b, seq *s,int eqc)
{
    int fa,fb,fc;
    double c,cold;

    c=0;
    cold = 1;

    do
    {
        cold=c;
        c = fabs(a + b) / 2;
       // printf("a = %f, b = %f, c = %f\n",a,b,c);
        fa=CmpSeq(Refuel(a,s->n), s,eqc);
        fb=CmpSeq(Refuel(b,s->n), s,eqc);
        fc=CmpSeq(Refuel(c,s->n), s,eqc);

        if(fa*fc < 0) b = c;
        else
        if(fc*fb < 0) a = c;
       // if( fa == 0) b=c;
       // if( fb == 0) a=c;

    }while( /*fc != 0*/ fabs(cold - c)> eps);
    return fabs(a+b)/2;
}


int main(int argc, char *argv[])
{
    seq *s3;
    seq *s4;
    seq *s2;
    FILE *f;
    double alpha,alphamin,alphamax;
    //s1 = MakeSeq(n);


    //f = fopen("input.txt","r");
    f= stdin;
    if( !f) printf("ololo\n");

    s2 = ReadSeq(f);

    //Refuel(30,s1);
    //PrintSeq(s1);
    //PrintSeq(s2);

   // printf("cmp = %i", CmpSeq(s1,s2));

     //printf("FindMaxAlpha = %f", FindMaxAlpha(s1));

     alpha =mpd(10,1000,s2,-1);
     //printf("alpha = %f\n",alpha);
    alphamin=mpd(0,alpha,s2,1);
    //printf("alphamin = %f\n",alphamin);
   // alphamax=mpd(alpha,10000,s2,-1);
   // printf("alphamax = %f\n",alphamax);

    s3 = Refuel(alpha-eps,s2->n+1);
    s4 = Refuel(alphamin+eps,s2->n+1);

    //PrintSeq(s3);
    //PrintSeq(s4);

    if ( !CmpSeq(s3,s4,0))
    {
        printf("unique\n%i",s3->arr[s3->n-1]);
    }
    else
    {
        printf("not unique");
    }







    return 0;
}
