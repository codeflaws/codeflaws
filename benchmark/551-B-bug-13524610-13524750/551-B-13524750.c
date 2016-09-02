#include <stdio.h>
#include <stdlib.h>

char a[100002]={0},b[100002]={0},c[100002]={0};
int aa1[27]={0},bb1[27]={0},cc1[27]={0};
int aa2[27]={0},bb2[27]={0},cc2[27]={0};


int main(int argc, char *argv[]){
    //freopen("a.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int i,j,k;
    int len_a=0,len_b=0,len_c=0;
    int mult_b=100000,mult_c=100000,mult=100000;
    int max=0,max_b=0,max_c=0,flag;
    int none=1;

    gets(a);
    gets(b);
    gets(c);
    for(i=0;i<100000;i++){
        if(a[i]>=97 && a[i]<=122){
            aa1[a[i]-96]++;
            len_a++;
        }
        if(b[i]>=97 && b[i]<=122){
            bb1[b[i]-96]++;
            len_b++;
        }
        if(c[i]>=97 && c[i]<=122){
            cc1[c[i]-96]++;
            len_c++;
        }
    }

    for(i=1;i<27;i++){
        if(bb1[i]!=0){
            mult=aa1[i]/bb1[i];
        }
        if(mult_b>mult){
            mult_b=mult;
        }
    }


    for(j=0;j<=mult_b;j++){
        flag=100000;
        mult=100000;
        for(i=1;i<27;i++){
            aa2[i]=aa1[i];
            aa2[i]=aa2[i]-j*bb1[i];
            if(cc1[i]!=0){
                mult=aa2[i]/cc1[i];
            }
            if(mult<flag){
                flag=mult;
            }
        }
        if(flag+j>max){
            max=flag+j;
            max_b=j;
            max_c=flag;
        }
    }

    for(i=0;i<max_b;i++){
        for(j=0;j<len_b;j++){
            printf("%c",b[j]);
        }
    }
    for(i=0;i<max_c;i++){
        for(j=0;j<len_c;j++){
            printf("%c",c[j]);
        }
    }
    for(i=1;i<27;i++){
        aa1[i]=aa1[i]-max_b*bb1[i]-max_c*cc1[i];
        while(aa1[i]>0){
            printf("%c",i+96);
            aa1[i]--;
        }
    }
    printf("\n");



    return 0;
}
