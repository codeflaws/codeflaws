#include <stdio.h>
#include <stdlib.h>

#define N 1005

int qua[N];
int val[N];
int n;
int ans = 0;


int main(int argc, char *argv[])
{
  int i, j, k, l;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", qua + i);
  }

  for(i = 0; i < n; i++)
    val[i] = -1;

  scanf("%d", &l);
  
  while(l-- > 0){
    scanf("%d%d%d", &i, &j, &k);
    i--;
    j--;
    if((k < val[j] || val[j] == -1) && qua[i] > qua[j]){
      val[j] = k;
    }
  }


  for(i = ans = l = 0; i < n; i++)
    if(val[i] < 0)
      if(l)
	break;
      else
	l = 1;
    else
      ans += val[i];

  printf("%d\n", i < n ? -1 : ans);

}

