#include<stdio.h>

int main(int argc, char *argv[]){
    int n,i,count,p,v,t;
    scanf("%d",&n);
    int total_problems[n];
    for(i=0,count=0;i<n;i++)
    {
        scanf("%d%d%d",&p,&v,&t);
        total_problems[i]=p*100+v*10+t;
      if(total_problems[i]==011||total_problems[i]==101||total_problems[i]==110||total_problems[i]==111)
        count++;
    }

    printf("%d",count);
    return 0;
}
