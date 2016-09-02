#include<stdio.h>
#include<string.h>
#include<ctype.h>
  int main(int argc, char *argv[]) {
  int n, i, j, taxi[100] = {0}, piza[100] = {0}, girl[100] = {0}, p;
  int f1, f2, f3, k, l, m1, m2, m3, flag, len; 
  char s[105][105], val[100];
  scanf("%d", &n);
  getchar();
  for(i = 0 ; i < n ; i++) {
      scanf("%d %s",&p, s[i]);
      getchar(); 
      for(j = 0 ; j < p ; j++) {
          scanf("%s",val); 
          getchar();
          len = strlen(val);
          f1 = f2 = f3 = 0; 
          for(k = 0 , l = k+1; k < len - 1; l++, k++) {
                  if(!isdigit(val[k]))
                      k++;
                  if(!isdigit(val[l])) 
                      l++;
                  if(f1 != -1 && val[k] == val[l]) 
                      f1 = 1;
                  else if(f2 != -1 && f1 != 1 && f3 != 1 && val[k] > val[l]) {
                      f2 = 1;
                      f1 = -1;
                  }
                  else {
                      f3 = 1;
                      f1 = f2 = -1;
                  } 
          } 
         // printf("%d %d %d\n",f1,f2,f3);
          if(f1 == 1)
              ++taxi[i];
          if(f2 == 1)
              ++piza[i];
          if(f3 == 1)
              ++girl[i];     
      }
    //  printf("\n");
  }
  for(i = 0 ; i < n ; i++) {
      if(m1 < taxi[i])
           m1 = taxi[i];
      if(m2 < piza[i])
           m2 = piza[i];
      if(m3 < girl[i])
           m3 = girl[i];
  }
printf("%d %d %d\n", m1,m2,m3);
 printf("If you want to call a taxi, you should call:");
    flag=0;
    for(i = 0; i < n ; ++i)
    {
        if(m1 == taxi[i])
        {
            if(flag)
            {
                printf(",");
            }
            printf(" %s",s[i]);
            flag=1;
        }
    }
    printf(".\n");
    printf("If you want to order a pizza, you should call:");
    flag=0;
    for(i = 0 ; i < n ; ++i)
    {
        if(m2 == piza[i])
        {
            if(flag)
            {
                printf(",");
            }
            printf(" %s",s[i]);
            flag=1;
        }
    }
    printf(".\n");
    printf("If you want to go to a cafe with a wonderful girl, you should call:");
    flag=0;
    for(i = 0; i < n; ++i)
    {
        if(m3 == girl[i])
        {
            if(flag)
            {
                printf(",");
            }
            printf(" %s",s[i]);
            flag=1;
        }
    }
    printf(".\n");

  return 0;
  }
