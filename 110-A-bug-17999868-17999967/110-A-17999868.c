#include<stdio.h>
int main(int argc, char *argv[])
{
char a[1000];
int k=0,l,i;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
 {
   if(a[i]==55||a[i]==52)
      k++;

 }
if(k==l&&(l==4||l==7))
printf("YES");
else
printf("NO");


return 0;
}
