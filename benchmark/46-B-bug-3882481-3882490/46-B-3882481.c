#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
   int s[6]={0},i,j,k,l;
   int pt[6][5];
   char ts[4];
   char tg[6][4];
   strcpy(tg[1],"S");
    strcpy(tg[2],"M");
     strcpy(tg[3],"L");
      strcpy(tg[4],"XL");
       strcpy(tg[5],"XXL");
   pt[1][0]=1;pt[1][1]=2;pt[1][2]=3;pt[1][3]=4;pt[1][4]=5;
   pt[2][0]=2;pt[2][1]=3;pt[2][2]=1;pt[2][3]=4;pt[2][4]=5;
   pt[3][0]=3;pt[3][1]=4;pt[3][2]=2;pt[3][3]=5;pt[3][4]=1;
   pt[4][0]=4;pt[4][1]=5;pt[4][2]=3;pt[4][3]=2;pt[4][4]=1;
   pt[5][0]=5;pt[5][1]=4;pt[5][2]=3;pt[5][3]=2;pt[5][4]=1;
   scanf("%d%d%d%d%d",&s[1],&s[2],&s[3],&s[4],&s[5]);
   scanf("%d",&l);
   for(i=0;i<l;i++)
   {
       scanf("%s",ts);
       if(strcmp(ts,"S")==0)
       {
           k=1;
       }
       else
        if(strcmp(ts,"M")==0)
        k=2;
        else if(strcmp(ts,"L")==0)
            k=3;
        else if(strcmp(ts,"XL")==0)
            k=4;
        else if(strcmp(ts,"XXL")==0)
            k=5;
        for(j=1;j<=5;j++)
        {
            if(s[pt[k][j]]>0)
            {
                s[pt[k][j]]-=1;
                printf("%s",tg[pt[k][j]]);
                break;
            }
        }
        printf("\n");

   }
   return(0);
}
