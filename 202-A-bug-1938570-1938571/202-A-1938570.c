#include<stdio.h>
int main(int argc, char *argv[])
{char a[10],max;
int i,j=0;
for(i=0;i<10;i++)
a[i]=0;
scanf("%s",a);
max=a[0];
i=0;
while(i<10)
{if(a[i]>=max)
{max=a[i];}
i++;
}
for(i=0;i<=10;i++)
if(a[i]==max)
j++;

for(i=0;i<=j;i++)
printf("%c",max);

return 0;
}