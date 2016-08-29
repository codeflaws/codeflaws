#include<stdio.h>
int main(int argc, char *argv[])
{
char a[50],b[60];
int i=0,j=0;
gets(a);
if(a[i]=='h')
{
for(i=0;i<4;i++)
{
b[j]=a[i];
j++;
}}
else
{
for(i=0;i<3;i++)
{
b[i]=a[i];
j++;
}}
b[j++]=':';
b[j++]='/';
b[j++]='/';

while(a[i]!='r'||a[i+1]!='u')
{
b[j++]=a[i++];

}

b[j++]='.';
b[j++]=a[i++];
b[j++]=a[i++];

if(a[i]!='\0')
{
b[j++]='/';
while(a[i]!='\0')
b[j++]=a[i++];
b[j]='\0';
}
else
b[j]='\0';


printf("%s",b);

return 0;
}






