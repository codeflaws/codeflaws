#include<stdio.h>
#include<string.h>
int aray[103], hold1[101], hold2[101];
int res[102];
int main(int argc, char *argv[])
{
    int n ,i, j, k,l=0, three=0, two=0, one=0, zero=0, p;
    scanf("%d", &n);
    k=0;
    for(i=0;i<101;i++){
        res[i]=-2;
    }
    for(i=0;i<n;i++){
        scanf("%d", &aray[i]);
        if(aray[i]==100){
            three++;
        }
        else if(aray[i]>9 && aray[i]<100){
            two++;
            if((aray[i]%10)==0){
                hold1[k]=aray[i];
                k++;
            }
            else{
                hold2[l]=aray[i];
                l++;
            }

        }
        else if(aray[i]==0){
            zero++;
        }
        else{
            one++;
            p=i;
        }

    }
    i=0;
    if(n==1){
        printf("1\n%d ", aray[0]);
        return 0;
    }
    if(three>=1){
        res[0]=100;
        if(one>0){
            if(hold1[0]!=0){
                res[1]=hold1[0];}
            res[2]=aray[p];
            if(zero>0){
                res[3]=0;
            }
        }
        else{
            if(hold2[0]!=0){
            res[1]=hold2[0];}
            else if(hold1[0]!=0){
                res[1]=hold1[0];
            }
            if(zero>0){
                res[2]=0;
            }
        }
    }
    else{
        if(one>0){
            if(hold1[0]!=0){
                res[0]=hold1[0];
            }
            res[1]=aray[p];
            if(zero>0){
                res[2]=0;
            }
        }
        else{
            if(hold1[0]!=0){
                res[0]=hold1[0];
            }
            else if(hold2[0]!=0){
                res[0]=hold2[0];
            }
            if(zero>0){
                res[1]=0;
            }
        }


    }
    int count=0;
    for(i=0;i<101;i++){
        if(res[i]!=-2){
            count++;
        }
    }
    printf("%d\n", count);
    for(i=0;i<15;i++){
        if(res[i]!=-2){
            printf("%d ", res[i]);
        }
    }
    return 0;
}
