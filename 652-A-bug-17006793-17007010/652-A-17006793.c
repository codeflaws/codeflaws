#include<stdio.h>
int main(int argc, char *argv[])
{
 int h1,h2;
 int a,b;
 scanf("%d %d",&h1,&h2);
 scanf("%d %d",&a,&b);
 
  if((h2-(h1+8*a))<1)
   printf("0\n");
   else if (a<=b)printf("-1\n");
   else {         int c=h2-h1-8*a;
	
	if(c%((a-b)*12)==0)printf("%d\n",c/((a-b)*12));
	else
               printf("%d\n",c/(a-b)+1);
        }
  return 0;
}