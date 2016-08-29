#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{  char str[100],str1[100],str2[100];
   str1[0]='y';
   str1[1]='e';
   str1[2]='s';
   int arr[100],i,j,tt=0;
   arr[0]=2;arr[1]=3;arr[2]=5;arr[3]=7;arr[4]=11;arr[5]=13;arr[6]=17;arr[7]=19;arr[8]=23;arr[9]=29;arr[10]=31;arr[11]=37;arr[12]=41;arr[13]=43;arr[14]=47;arr[15]=53;
   for(i=0;i<=3;i++)
   {
       fflush(stdout);
       printf("%d\n",arr[i]);
       fflush(stdout);
       scanf("%s",str);
       if(strcmp(str,str1)==0)
       {
           j=i;
           while(arr[j]*arr[i]<=100)
           {
               printf("%d\n",arr[j]);
               fflush(stdout);
               scanf("%s",str);
               fflush(stdout);
               if(strcmp(str,str1)==0)
               {printf("composite\n");fflush(stdout);tt=1;i=4;break;}
           }
       }
   }
   if(tt==0)
    printf("prime\n");fflush(stdout);
    return 0;
}


