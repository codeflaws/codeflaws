#include<stdio.h>


int main(int argc, char *argv[])
{
    char pstr[10];
    int bol,res;
    scanf("%s",pstr);
    if(pstr[0]!='1'){printf("NO");}
    else{
    for(int O=0;((pstr[O]!='0')||(pstr[O]!='2'))&&pstr[O]!=0;O++)
    {
       res=pstr[O+1]+pstr[O]-96;
       if((res>0)&&((res==5)||(res==2)))
       bol=1;
       else if(res>0){printf("NO");bol=0;break;}
       else if(res==-47){bol=1;break;}
    }
    if(bol==1){printf("YES");}
    }
return 0;
}
