#include<stdio.h>
//#include<conio.h>
#include<string.h>
int main(int argc, char *argv[])
{
char s1[15],s2[12][15]={"January","February","March","April","May","June","July","August","September","October","November","December"};
int n,z,i;
scanf("%s",s1);
scanf("%d",&n);
for(i=0;i<12;i++)
{
 if(strcmp(s1,s2)==0)
  break;
}
z=(i+n)%12;
printf("%s",s2[z]);
return(0);
getch();
}
