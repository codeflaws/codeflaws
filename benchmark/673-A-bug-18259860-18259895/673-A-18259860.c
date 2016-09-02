#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int a,l,i,q;
    scanf("%d",&a);
    int s[a];
    for(i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    for(i=0;i<a;i++){
        if(s[0]==16){
            printf("15\n");
            goto A;
        }
        else if((s[i+1]-s[i])>15){
            q=s[i]+15;
            if(q>90){
                printf("90\n");
            }
            else{
                printf("%d\n",q);
            }
            goto A;
        }
    }
    A:return 0;
}
