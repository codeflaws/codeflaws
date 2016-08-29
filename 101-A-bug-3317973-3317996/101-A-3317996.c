#include<stdio.h>
#include<string.h>
char arr[100005];
int k;
struct string
{
int index[100005];
int character;
}e[251];
static int age_comp(const void *p1, const void *p2)
{
   struct string *sp1 = (struct string *) p1;
   struct string *sp2 = (struct string *) p2;

   return sp1->character - sp2->character;
}

void solve();
int main(int argc, char *argv[])
{
scanf("%s",arr);
scanf("%d",&k);
solve();
return 0;
}
void solve()
{
int d,l,i,sum=0,j,m,dst=0,t=0;
l=strlen(arr);

for(i=0;i<=250;i++)
e[i].character=0;
if(k>=l)
{
printf("0\n");
printf("\0");
}
else
{
for(i=0;i<l;i++)
{
d=arr[i];
//printf("%d",d);
e[d].index[e[d].character]=i;
e[d].character++;
 }
qsort(e,250,sizeof e[0],age_comp);
m=0;
while(e[m].character==0)
m++;
for(i=0;i<=250;i++)
{
if(e[i].character!=0)
dst++;
}
for(i=m;i<=(m+26);i++)
{
if(e[i].character!=0)
{
sum+=e[i].character;
if(sum>k)
break;
t++;
for(j=0;j<e[i].character;j++)
{
arr[e[i].index[j]]='?';
}
}
}
//printf("%d",t);
dst=dst-t;
printf("%d\n",dst);
for(i=0;i<l;i++)
{
if(arr[i]!='?')
printf("%c",arr[i]);
}
}
}
