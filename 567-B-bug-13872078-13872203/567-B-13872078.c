#include<stdio.h>
#include <stdlib.h>


int a[1000001][3]={0};
int cal[100]={0};

int main(int argc, char *argv[]){

    int i,j,temp;
    char io,trash;
    int num;
    int pos=0,neg=0,now=0,max=0,sum;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%c",&trash);
        scanf("%c %d",&io,&temp);
        if(io=='+'){//�i�J
            now++;
            a[temp][1]=1;
        }
        else if(io=='-'){//���}
            if(a[temp][1]){
                now--;
            }
            else{
                for(j=0;j<i;j++){
                    cal[j]++;
                }
            }
        }
        cal[i]=now;
        for(j=0;j<=i;j++){
            if(cal[j]>max) max=cal[j];
            //printf("%d ",cal[j]);
        }
        //printf("\n");
    //printf("max=%d now=%d\n",max,now);
    }


    printf("%d\n",max);


    return 0;
}

