#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, c, i, j, k=0, aray[3], mx, mn, md;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c){
        if(a%2==1) printf("Impossible");
        else printf("%d %d %d",a/2, a/2, a/2);
        return 0;
    }
    else if(a+b==c){
        printf("%d %d %d", 0, b, a);
    }
    else if(b+c==a){
        printf("%d %d %d", b, 0, c);
    }
    else if(c+a==b){
        printf("%d %d %d", a, c, 0);
    }
    else{
        aray[0]=a;
        aray[1]=b;
        aray[2]=c;
        for(i=1;i<3;i++){
            j=i;
            while(j>0 && aray[j]<aray[j-1]){
                aray[j]^=aray[j-1];
                aray[j-1]^=aray[j];
                aray[j]^=aray[j-1];
                j--;
            }
        }
        mx=aray[2];
        mn=aray[0];
        md=aray[1];
        if(mn+md<mx){
            printf("Impossible");
            return 0;
        }
        else{
            if(a+b>c){
                while(a+b!=c){
                    k++;
                    a--;
                    b--;
                    if(a+b<c){
                        break;
                    }
                }
                if(a+b==c){
                    printf("%d %d %d", k, b, a);
                }
                else{
                    printf("Impossible");
                }
            }
            else if(b+c>a){
                while(c+b!=a){
                    k++;
                    c--;
                    b--;
                    if(c+b<a){
                        break;
                    }
                }
                if(c+b==a){
                    printf("%d %d %d",b, k, c);
                }
                else{
                    printf("Impossible");
                }
            }
            else if(c+a>b){
                while(a+c!=b){
                    k++;
                    a--;
                    c--;
                    if(a+c<b){
                        break;
                    }
                }
                if(a+c==b){
                    printf("%d %d %d", a, c, k);
                }
                else{
                    printf("Impossible");
                }
            }
        }


    }

    return 0;
}
