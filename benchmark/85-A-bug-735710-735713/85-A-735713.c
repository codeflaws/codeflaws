#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int n, i, j;
    scanf("%d", &n);
    if(n == 1)
         printf("a\na\nb\nb\n");
    else if(n % 2 != 0)
    {
         for(i = 0; i < 2; i++)
         {
              if(i % 2 == 0)
              {
                   j = 0;
                   while(j < n)
                   {
                           if(j >= n - 2)
                                break;
                           printf("aa");
                           j += 2;
                           if(j >= n - 2)
                                break;
                           printf("cc");
                           j += 2;
                           if(j >= n - 2)
                                break;
                   }
                   printf("b");
              }
              else
              {
                   j = 0;
                   while(j < n)
                   {
                           if(j >= n - 2)
                                break;
                           printf("cc");
                           j += 2;
                           if(j >= n - 2)
                                break;
                           printf("aa");
                           j += 2;
                           if(j >= n - 2)
                                break;
                   }
                   printf("b");
              }
              printf("\n");
        }
        for(i = 2; i < 4; i++)
        {
              if(i % 2 == 0)
              {
                   printf("b");
                   j = 1;
                   while(j < n)
                   {
                           if(j >= n)
                                break;
                           printf("kk");
                           j += 2;
                           if(j >= n)
                                break;
                           printf("ll");
                           j += 2;
                           if(j >= n)
                                break;
                   }
              }
              else
              {
                   printf("b");
                   j = 1;
                   while(j < n)
                   {
                           if(j >= n)
                                break;
                           printf("ll");
                           j += 2;
                           if(j >= n)
                                break;
                           printf("kk");
                           j += 2;
                           if(j >= n)
                                break;
                   }
              }
              printf("\n");
        }
    }
    else if(n == 2)
         printf("aa\nbb\naa\nbb");     
    else
    {
        for(i = 0; i < 2; i++)
        {
              if(i % 2 == 0)
              {
                   j = 0;
                   while(j < n)
                   {
                           if(j >= n)
                                break;
                           printf("aa");
                           j += 2;
                           if(j >= n)
                                break;
                           printf("bb");
                           j += 2;
                           if(j >= n)
                                break;
                   }
              }
              else
              {
                   j = 0;
                   while(j < n)
                   {
                           if(j >= n)
                                break;
                           printf("bb");
                           j += 2;
                           if(j >= n)
                                break;
                           printf("aa");
                           j += 2;
                           if(j >= n)
                                break;
                   }
              }
              printf("\n");
        }
        for(i = 2; i < 4; i++)
        {
              if(i % 2 == 0)
              {
                   printf("z");
                   j = 1;
                   while(j < n)
                   {
                           if(j >= n - 1)
                                break;
                           printf("kk");
                           j += 2;
                           if(j >= n - 1)
                                break;
                           printf("ll");
                           j += 2;
                           if(j >= n - 1)
                                break;
                   }
                   printf("z");
              }
              else
              {
                   printf("z");
                   j = 1;
                   while(j < n)
                   {
                           if(j >= n - 1)
                                break;
                           printf("ll");
                           j += 2;
                           if(j >= n - 1)
                                break;
                           printf("kk");
                           j += 2;
                           if(j >= n - 1)
                                break;
                   }
                   printf("z");
              }
              printf("\n");
        }
    }
    return 0;
}                                                               
