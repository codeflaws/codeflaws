#include<stdio.h>
int main(int argc, char *argv[])
{
int cnt1=0,cnt2=0,f,n,m,i=0,p,q;
char a[1000001];
scanf("%d%d",&n,&m);
p=n;q=m;
a[0]='R';n--;
//b[0]='B';
f=1;
while(n&&m)
{
if(f){
if(a[i]=='R')
{a[i+1]='B';m--;}
else{
a[i+1]='R';n--;}
f=0;
}
else{
if(a[i]=='R')
{a[i+1]='R';n--;}
else
{a[i+1]='B';m--;}
f=1;
}
//n--;m--;
i++;
}
while(n)
{a[(i+1)]='R';n--;i++;
}
while(m)
{a[i+1]='B';m--;i++;
}
a[i+1]='\0';
//printf("%s\n",a);
i=0;
while(a[i+1]!='\0')
{
if(a[i]==a[i+1])cnt1++;
else cnt2++;
i++;
}
n=p;m=q;
a[0]='B';i=0;f=1;m--;
while(n&&m)
{
if(f){
if(a[i]=='R')
{a[i+1]='B';m--;}
else{
a[i+1]='R';n--;}
f=0;
}
else{
if(a[i]=='R')
{a[i+1]='R';n--;}
else
{a[i+1]='B';m--;}
f=1;
}
//n--;m--;
i++;
}
while(n)
{a[(i+1)]='R';n--;i++;
}
while(m)
{a[i+1]='B';m--;i++;
}
a[i+1]='\0';
i=0;int cnt3=0,cnt4=0;
while(a[i+1]!='\0')
{
if(a[i]==a[i+1])cnt3++;
else cnt4++;
i++;
}
//printf("%s\n",a);
if(cnt1>cnt3)
printf("%d %d\n",cnt1,cnt2);
else
printf("%d %d\n",cnt3,cnt4);
return 0;
}
