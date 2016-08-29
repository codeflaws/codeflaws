#include <stdio.h>
int main(int argc,char** argv){
    int n,i,j,p;
    int ai[201]={0};
    int k;
    int folder[201]={0};
    scanf("%d",&n);
    {
        for(i=0;i<n;i++){
            scanf("%d",&ai[i]);
            //printf("%d\n",ai[i]);
        }
        for(i=0,j=0,k=0,p=0;i<n;i++)
        {
            if(ai[i]<0)
                j++;

            if(j==3)
            {
                folder[k++]= i-1 - p;
                p=i;
                j = 1;
                //printf("??? %d\n",i);
            }   
        }
        if(p<n)
            folder[k++]= n -1 - p;
        printf("%d\n",k);
        for(i=0;i<k;i++){
            printf("%d ",folder[i]+1);
        }
   //     printf("\n");
    }
    return 0;
}
