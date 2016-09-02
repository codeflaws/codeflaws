#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int n,a,b,i,now=1,total=1;
    scanf("%d%d%d",&n,&a,&b);
    if(a+b>=n)  printf("-1");
    else if(n==1)   printf("%d",now);
    else if(a==(n-1)&&b==0) printf("-1");
    else if(b==0){
        printf("%d %d ",now,now);   
        total++; 
        for(i=2;i<n;i++){
            if(a>0){
                now=total+1;
                total+=now;
                printf("%d ",now);
                a--;
            }
            else    printf("%d ",now);
        }
    }
    else{
        printf("%d ",now);
        for(i=1;i<n;i++){
            if(b>0){
                now=total+1;
                total+=now;
                printf("%d ",now);
                b--;
            }   
            else if(a>0){
                now++;
                total++;
                printf("%d ",now);
                a--;    
            }
            else{
                printf("%d ",now);
            }
                //printf("antony");
        }    
      
    }
    //system("pause");
    return 0;    
}
