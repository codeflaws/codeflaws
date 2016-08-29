#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
char h[10],p[10],d[10],z[8]="scissors",x[5]="paper",c[4]="rock";
int m=0,n=0,i=0,k=0,j=0,l=0,t=0,q=0,w=0,e=0,r=0,a=0,b=0,g=1;
scanf("%s", h);
n = strlen(h);

scanf("%s", p);
m = strlen(p);

scanf("%s", d);
l = strlen(d);
/*
	if (q!=1)
	{printf("1");
while((c=getchar())!='\n')
{h[i]=c;
n++;
}}
	if (w!=1)
	{printf("2");
while((c=getchar())!='\n')
{p[k]=c;
m++;
}}
if (e!=1)
{printf("3");
while((c=getchar())!='\n')
{d[j]=c;
l++;
}}*/
/*
if (h[0]=='s')
{
for(i=0;i<n;i++)
{if
	(h[i]==z[i])
	g++;}}
else if (h[0]=='p')
{for(i=0;i<n;i++)

{if
	(h[i]==x[i])
	g++;}}
else if (h[0]=='r')
for(i=0;i<n;i++){
{if
	(h[i]==c[i])
	g++;}}
/////////////////

if (p[0]=='s')
for(i=0;i<m;i++){
{if
	(p[i]==z[i])
	g++;}}
else if (p[0]=='p')
for(i=0;i<m;i++){
{if
	(p[i]==x[i])
	g++;}}
else if (p[0]=='r')
for(i=0;i<m;i++){
{if
	(p[i]==c[i])
	g++;}}
////////////////

if (d[0]=='s')
for(i=0;i<l;i++){
{if
	(d[i]==z[i])
	g++;}}
else if (d[0]=='p')
for(i=0;i<l;i++){
{if
	(d[i]==x[i])
	g++;}}
else if (d[0]=='r')
for(i=0;i<l;i++){
{if
	(d[i]==c[i])
	g++;}}
if((g==18)||(g==13)||(g==20))
{
*/
if (((n==8)&&(m==5)&&(l==5))||((n==5)&&(m==4)&&(l==4))||((n==4)&&(m==8)&&(l==8)))
printf("F"); 
else if (((n==5)&&(m==8)&&(l==5))||((n==4)&&(m==5)&&(l==4))||((n==8)&&(m==4)&&(l==8)))
printf("M");
else if (((n==5)&&(m==5)&&(l==8))||((n==4)&&(m==4)&&(l==5))||((n==8)&&(m==8)&&(l==4)))
printf("S"); 
else printf("?");
return 0;
}
/*
else if (((n==5)&&(m==8)&&(l==8))||((n==4)&&(m==5)&&(l==5))||((n==8)&&(m==4)&&(l==4)))
printf("?");
else if (((n==8)&&(m==5)&&(l==8))||((n==5)&&(m==4)&&(l==5))||((n==4)&&(m==8)&&(l==4)))
printf("?");
else if (((n==8)&&(m==8)&&(l==5))||((n==5)&&(m==5)&&(l==4))||((n==4)&&(m==4)&&(l==8)))
printf("?");*/
//else printf("?");

/*
{
	if (q==1)
	{ a=m; b=l;
if (((a==8)&&(b==5))||((a==5)&&(b==4))&&((a==4)&&(b==8)))
{
	printf("M"); t=1;}
else {printf("S"); t=1;}}
else if (w==1)
	{ a=n; b=l;
if (((a==8)&&(b==5))||((a==5)&&(b==4))&&((a==4)&&(b==8)))
{
printf("F"); t=1;}
else {printf("S"); t=1;}}
else if (e==1)
	{ a=n; b=m;
if (((a==8)&&(b==5))||((a==5)&&(b==4))&&((a==4)&&(b==8)))
{
printf("F"); t=1;}
else {printf("M");t=1;}}
}
}
}
*/
/*
while (t!= 1)
{
	if (q!=1)
	{printf("1");
n=getchar();
}
	if (w!=1)
	{printf("2");
m=getchar();
	}
if (e!=1)
{printf("3");
l=getchar();}

if (r!=1)
{
if (((n=='s')&&(m=='p')&&(l=='p'))||((n=='s')&&(m=='r')&&(l=='r'))&&((n=='r')&&(m=='r')&&(l=='s')))
{
	printf("F"); t=1;}
else if (((n=='p')&&(m=='s')&&(l=='p'))||((n=='r')&&(m=='p')&&(l=='r'))&&((n=='s')&&(m=='r')&&(l=='s')))
{printf("M"); t=1;}
else if (((n=='p')&&(m=='p')&&(l=='s'))||((n=='r')&&(m=='r')&&(l=='p'))&&((n=='s')&&(m=='s')&&(l=='r')))
{printf("S"); t=1;}
else if (((n=='p')&&(m=='s')&&(l=='s'))||((n=='r')&&(m=='p')&&(l=='p'))||((n=='s')&&(m=='r')&&(l=='r')))
{q=1;
r=1;}
else if (((n=='s')&&(m=='p')&&(l=='s'))||((n=='p')&&(m=='r')&&(l=='p'))||((n=='r')&&(m=='s')&&(l=='r')))
{w=1;
r=1;}
else if (((n=='s')&&(m=='s')&&(l=='p'))||((n=='p')&&(m=='p')&&(l=='r'))||((n=='r')&&(m=='r')&&(l=='s')))
{e=1;
r=1;}
}
else
{
	if (q==1)
	{ a=m; b=l;
if (((a=='s')&&(b=='p'))||((a=='p')&&(b=='r'))&&((a=='r')&&(b=='s')))
{
	printf("M"); t=1;}
else {printf("S"); t=1;}}
else if (w==1)
	{ a=n; b=l;
if (((a=='s')&&(b=='p'))||((a=='p')&&(b=='r'))&&((a=='r')&&(b=='s')))
{
printf("F"); t=1;}
else {printf("S"); t=1;}}
else if (e==1)
	{ a=n; b=m;
if (((a=='s')&&(b=='p'))||((a=='p')&&(b=='r'))&&((a=='r')&&(b=='s')))
{
printf("F"); t=1;}
else {printf("M");t=1;}}
}
}
return 0;
}

*/

