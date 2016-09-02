#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{  int f=0;
   int n,l,i,sx,sy,ex,ey,x,y;
   char a[100002];
  while(scanf("%d%d%d%d%d",&n,&sx,&sy,&ex,&ey)!=EOF)
  {    f=0;
      scanf("%s",a);
      l=strlen(a);
      x=ex-sx;
      y=ey-sy;
      for(i=0;i<l;i++)
      {
         if(x==0&&y==0)
         {
           f=1;
           break;
         }
         else
         {
            if(a[i]=='W'&&x<0){x++;}
            if(a[i]=='E'&&x>0){x--;}
            if(a[i]=='N'&&y>0){y--;}
            if(a[i]=='S'&&y<0){y++;}
            printf("%d %d\n",ex-x,ey-y);
         }
      }
       if(x==0&&y==0)
         {
           f=1;
         }
      if(f){printf("%d\n",i);}
      else {printf("-1\n");}
  }
return 0;
}
