#include"stdio.h"
long n;
long f[1011];
long solve()
{
     long i,j,k,r,w,sum=0,mid=0,num=0,ok = 1;
     long a,b,c;
     scanf("%ld",&n);
     for(i=1;i<=n;i++) { scanf("%ld",&f[i]); sum += f[i]; }
     mid = sum / n;
     if(mid * n != sum) { return -1;  }
     for(i=1;i<=n;i++) 
       if(f[i] - mid != 0)
       {  if(num == 0)  { num = f[i] - mid; k = i; } 
          else if(ok != 1) return -1;
          else if(num + (f[i] - mid) != 0) return -1;
          else 
          { if(num > 0) { a = k; b = i; c = num; }
            else {a = i; b = k; c = num; } 
            num = 0; ok = 0;  
          }
       }
     if(num != 0) return -1;  
     if(ok == 1) return 0;
     printf("%ld ml. from cup #%ld to cup #%ld.\n",c,b,a);
}
int main(int argc, char *argv[])
{
    long k; 
    k = solve();
    if(k == -1) printf("Unrecoverable configuration.\n");
    else if(k == 0) printf("Exemplary pages.\n");
    return 0;
    
}
