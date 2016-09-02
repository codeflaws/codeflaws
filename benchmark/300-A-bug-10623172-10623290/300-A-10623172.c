#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,i,p=0,q=0;
    scanf("%d",&n);
    int a[n],c=0,x,a1[n],a2[n],a3[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0) c++;
        if(a[i]<0){
            x=i;
        }
    }
    if(c>0){
        a1[0]=a[x];
        for(i=0;i<n;i++){
            if(i==x) continue;
            else{
                if(a[i]==0||a[i]<0){
                    a3[p]=a[i];
                    p++;
                }
                else if(a[i]>0){
                    a2[q]=a[i];
                    q++;
                }
            }
        }
        printf("1 ");
        printf("%d\n",a1[0]);
        printf("%d ",q);
        for(i=0;i<q;i++) printf("%d ",a2[i]);
        printf("\n%d ",p);
        for(i=0;i<p;i++) printf("%d ",a3[i]);
    }
    else{
        a2[0]=a[x];
        int flag=0;
        for(i=0;i<n;i++){
            if(flag==0&&a[i]<0){
                a1[p]=a[i];
                flag=1;
                p++;
            }
            else if(flag==1&&a[i]<0){
                flag=2;
                a2[1]=a[i];

            }
            else if(flag==2&&a[i]<0){
                a3[q]=a[i];
                q++;
            }
            if(a[i]==0){
                a3[q]=a[i];
                q++;
            }
        }
        printf("1 ");
        printf("%d\n",a1[0]);
        printf("2 ");
        printf("%d %d",a2[0],a2[1]);
        printf("\n%d ",q);
        for(i=0;i<q;i++) printf("%d ",a3[i]);
    }
    return 0;
}
