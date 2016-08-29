#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(int argc, char *argv[]){
    int sx=0,sy=0,p=1,a,b,i,num_len,dx,dy;
    char s[110];
    int pos_x[110];
    int pos_y[110];
    scanf("%d %d %s",&a,&b,s);
    pos_x[0]=pos_y[0]=0;
    num_len=strlen(s);
    for(i=0;i<num_len;i++){
        switch(s[i]){
        case 'U':
            sy++;   
            break;
        case 'D':
            sy--;
            break;
        case 'R':
            sx++;
            break;
        case 'L':
            sx--;
            break;
        default: ;
        }
        pos_x[i+1]=sx;
        pos_y[i+1]=sy;
    }
    dx=pos_x[num_len];
    dy=pos_y[num_len];
    for(i=0;i<=num_len;i++){
        if(dx && dy){
            if((float)(a-pos_x[i])/dx==(float)(b-pos_y[i])/dy && ((dx>0 && (a-pos_x[i])>=0)||(dx<0 && (a-pos_x[i])<=0))) {printf("Yes"); return 0;}
        }
        else if(dx){
            if(b-pos_y[i]==0 && (a-pos_x[i])%dx==0 && ((dx>0 && (a-pos_x[i])>=0)||(dx<0 && (a-pos_x[i])<=0))) {printf("Yes"); return 0;}
        }else if(dy){
            if(a-pos_x[i]==0 && (b-pos_y[i])%dy==0 && ((dy>0 && (b-pos_y[i])>=0)||(dy<0 && (b-pos_y[i])<=0))) {printf("Yes"); return 0;}
        }else{
            if(a==pos_x[i] && b==pos_y[i]) {printf("Yes"); return 0;}
        }
    }
    printf("No");
    return 0;
}