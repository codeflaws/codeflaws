#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
  return (*(int*)a - *(int*)b);
}
int main(int argc, char *argv[])
{
  int n, a[100005],check=0;
  scanf("%d",&n);
  int i;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(check==0 && a[i]!=1)
      check=1;
  }
  qsort(a,n,sizeof(int),cmp);
  if(check==1)
  {
  printf("1 ");
  for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
  }
  else
  {
    for(i=0;i<n-1;i++)
      printf("%d ",a[i]);
    printf("2");
  }
  printf("\n");
  return 0;
}

