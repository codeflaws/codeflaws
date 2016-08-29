#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int n;int count=0,found=0;int i;
    scanf("%d",&n);
    char a[12],b[12],c[12];

  if(n==1){
    getchar();
    gets(a);
    printf("%s",a);
    return 0;
  }
    getchar();
    gets(a);
    count++;

    for(i=0;i<n-1;i++){
        gets(c);
        if(strcmp(a,c)==1){
            count++;
        }
        else{
            strcpy(b,c);
            found++;
        }

    }
     if(count>=found){
            printf("%s",a);
        }
        else{
            printf("%s",b);
        }

}
