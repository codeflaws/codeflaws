#include<stdio.h>
int main(int argc, char *argv[])
{
    char b[10],a[3],ans[]={'F','M','S' };int r=0,p=0,s=0,i;
    for(i=0;i<3;i++){scanf("%s",b);
     if(b[0]=='r') r++,a[i]='r';
      else if(b[0]=='p') p++,a[i]='p';
      else s++,a[i]='s';
    }
    if(r==2&&p==1){ for(i=0;i<3;i++) if(a[i]=='p') break;
        printf("%c\n",ans[i]);
    }else if(p==2&&s==1){for(i=0;i<3;i++) if(a[i]=='s') break;
        printf("%c\n",ans[i]);
    }else if(s==2&&r==1){for(i=0;i<3;i++) if(a[i]=='p') break;
        printf("%c\n",ans[i]);
    }else{printf("?\n"); }
    return 0;
}
