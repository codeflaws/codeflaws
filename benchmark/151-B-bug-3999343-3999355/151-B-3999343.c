#include<stdio.h>
int main(int argc, char *argv[])
{
int n,i,j,maxtaxi=0,maxpizza=0,maxgirl=0,l1=0,l2=0,l3=0;
scanf("%d",&n);
int s[n],taxi[100]={0},girl[100]={0},pizza[100]={0};
char c[n][100];
for(i=0;i<n;i++)
{scanf("%d %s",&s[i],c[i]);
char p[s[i]][10];
for(j=0;j<s[i];j++)
{scanf("%s",p[j]);
if(p[j][0]==p[j][1]&&p[j][1]==p[j][3]&&p[j][3]==p[j][4]&&p[j][4]==p[j][6]&&p[j][6]==p[j][7])
taxi[i]++;
else if(p[j][1]<p[j][0]&&p[j][3]<p[j][1]&&p[j][4]<p[j][3]&&p[j][6]<p[j][4]&&p[j][7]<p[j][6])
pizza[i]++;
else
girl[i]++;
}
if(taxi[i]>=maxtaxi)
maxtaxi=taxi[i];
if(pizza[i]>=maxpizza)
maxpizza=pizza[i];
if(girl[i]>=maxgirl)
maxgirl=girl[i];}
for(i=0;i<n;i++)
{if(taxi[i]==maxtaxi)
l1++;
if(pizza[i]==maxpizza)
l2++;
if(girl[i]==maxgirl)
l3++;}
int z=0;
printf("If you want to call a taxi, you should call: ");
for(i=0;i<n;i++)
{if(taxi[i]==maxtaxi)
{printf("%s",c[i]);
z++;
if(z<=l1-1)
printf(", ");
else
{printf(".");
break;}}
}
printf("\n");
z=0;
printf("If you want to order a pizza, you should call: ");
for(i=0;i<n;i++)
{if(pizza[i]==maxpizza)
{printf("%s",c[i]);
z++;
if(z<=l2-1)
printf(", ");
else
{printf(".");
break;}}
}
printf("\n");
z=0;
printf("If you want to go to a cafe with a wonderful girl, you should call: ");
for(i=0;i<n;i++)
{if(girl[i]==maxgirl)
{printf("%s ",c[i]);
z++;
if(z<=l3-1)
printf(", ");
else
{printf(".");
break;}}}
return(0);}
