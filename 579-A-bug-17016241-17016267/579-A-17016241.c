#include<stdio.h>
int main(int argc, char *argv[])
{
   long int output,f,input=0;
   printf("Enter the num of bac you want");
   scanf("%ld",&output);
   while(output>0)
   {
       f = output % 2;
       if(f!=0)
       {
         input++;
       }

       output=(output/2);

       }
       printf("%ld",input);
   
return 0; //ADDED
}

