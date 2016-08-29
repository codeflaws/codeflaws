#include<stdio.h>
int  main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int flag=0;
    int sum25=0,sum50=0;
   for(i=0;i<n;i++){
        if(i==0&&a[i]!=25){
            flag=0;
            break;
        }
        else if(a[i]==25){
            sum25++;
        }
        else if(a[i]==50){
            if(sum25>0){
                flag=1;
                sum25--;
                sum50++;
            }
            else {
                flag=0;
                 break;
            }

        }
        else if(a[i]==100){
            if((sum25>0&&sum50>0)){
                flag=1;
                sum25--;
                sum50--;
            }
            else if((sum25>2)){
                sum25=sum25-3;
                flag=1;
            }
            else {
                flag=0;
                break;
            }
        }



   }
    if(flag==1){
        printf("YES\n");
    }
    else printf("NO\n");
return 0;
}
