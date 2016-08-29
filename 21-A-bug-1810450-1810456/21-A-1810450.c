#include<stdio.h>
#include<ctype.h>
#define input(l) while((c=getchar())&&(isalnum(c)||c=='_')) l++
#define check(l) if(l==0||l>16) {printf("NO");flag=0;}
int main(int argc, char *argv[])
{
  char c;
  int l=0,flag=1,fflag=0;
  input(l);
  if(c!='@') {printf("NO");flag=0;}
  else check(l)
  if(flag)
  {
    int L=0;
    newl:
         l=0;
         input(l);
         if(c=='.') {check(l)
                     L+=l;
                    if(flag) goto newl;
                    }
         else if(c=='/') {check(l)
                             L+=l;
                          if(L==0||L>32) {printf("NO");flag=0;}
                          fflag=1;}
         else if(c==EOF||c=='\n') {check(l)
                             L+=l;
                          if(flag&&(L==0||L>32)) {printf("NO");flag=0;}
                          if(flag) printf("YES");}
         else {printf("NO");flag=0;}
  } 
  if(flag&&fflag)
  {
            input(l);
            if(c!=EOF&&c!='\n') {printf("NO");flag=0;}
            else check(l)
            if (flag) printf("YES");
  }
  return 0;
}