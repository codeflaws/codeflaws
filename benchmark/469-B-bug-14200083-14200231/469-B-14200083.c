#include <stdio.h>
#include <stdlib.h>

struct otr {
    int a;
    int b;
};

void add_time(struct otr *mas, int len)
{
    int i;
    for(i=0;i<len;i++) {
        (mas[i].a)++;
        (mas[i].b)++;
    }
}

int cross(struct otr first,struct otr second)
{
    return ((first.a <= second.b)&&
            (first.b >= second.a));
}

int main(int argc, char *argv[])
{
    int p,q,l,r;
    scanf("%d%d%d%d",&p,&q,&l,&r);
    int i,j;
    struct otr x[p],z[q];
    for(i=0;i<p;i++)
        scanf("%d%d",&(z[i].a),&(z[i].b));
    for(i=0;i<q;i++)
        scanf("%d%d",&(x[i].a),&(x[i].b));
    for(i=0;i<q;i++) {
        x[i].a+=l;
        x[i].b+=l;
    }
    int count,k=0,flag,t;
    for(count=l;count<=r;count++) {
        flag=0;
        for(i=0;i<q;i++){
            for(j=0;j<p;j++)
                if (cross(x[i],z[j])) {
                    k++;
                    flag=1;
                    break;
                }
            if (flag)
                break;
        }
        add_time(x,q);
    }
    printf("%d",k);
    return 0;
}