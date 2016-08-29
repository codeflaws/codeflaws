#include<stdio.h>
struct ab{
    int ar;
    int br;
};
int main(int argc, char *argv[])
{
    struct ab cr[1000];
    struct ab temp;
    int i,j,m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&cr[i].ar,&cr[i].br);
    }
    for(i=0;i<n;i++){
            for(j=i+1;j<n;j++)
            {
                if(cr[i].ar>cr[j].ar){
                    temp=cr[i];
                    cr[i]=cr[j];
                    cr[j]=temp;
                }
            }
}
 for(i=0;i<n;i++){
       if(m<cr[i].ar){
        printf("NO");
        break;
       }
       else{
        m=m+cr[i].br;
       }
       if(i==n-1){
        printf("YES");
        break;
       }
 }
return 0;
}

