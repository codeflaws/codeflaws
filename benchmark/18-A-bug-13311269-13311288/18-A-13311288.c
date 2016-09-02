#include<stdio.h>
#include<math.h>

int area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int l1 ,l2, l3;
    l1 = (pow(abs(x1-x2),2)) + pow(abs(y1-y2),2);
    l2 = (pow(abs(x3-x2),2)) + pow(abs(y3-y2),2);
    l3 = (pow(abs(x1-x3),2)) + pow(abs(y1-y3),2);
    if(((l1+l2==l3) || (l2+l3==l1 ) || (l1+l3==l2)) && (l1>0 && l2>0 && l3>0)){
        return 1;
    }
    else{
        return 0;
    }


}
int main(int argc, char *argv[])
{
    int a, b, i, j, x, p, q;
    int aray[6];
    for(i=0;i<6;i++){
        scanf("%d", &aray[i]);
    }
    a = area(aray[0],aray[1],aray[2],aray[3], aray[4], aray[5]);
    if(a==1){
        printf("RIGHT");
        return 0;
    }
    for(i=0;i<6;i++){
        x = aray[i];
        p = x+1;
        q = x-1;
        if(i==0){
            a = area(p,aray[1],aray[2],aray[3], aray[4], aray[5]);
            b = area(q,aray[1],aray[2],aray[3], aray[4], aray[5]);
            if(a==1 || b==1){
                printf("ALMOST");
                return 0;
            }
        }
        else if(i==1){
            a = area(aray[0],p,aray[2],aray[3], aray[4], aray[5]);
            b = area(aray[0],q,aray[2],aray[3], aray[4], aray[5]);
            if(a==1 || b==1){
                printf("ALMOST");
                return 0;
            }
        }
        else if(i==2){
            a = area(aray[0],aray[1],p,aray[3], aray[4], aray[5]);
            b = area(aray[0],aray[1],q,aray[3], aray[4], aray[5]);
            if(a==1 || b==1){
                printf("ALMOST");
                return 0;
            }
        }
        else if(i==3){
            a = area(aray[0],aray[1],aray[2],p, aray[4], aray[5]);
            b = area(aray[0],aray[1],aray[2],q, aray[4], aray[5]);
            if(a==1 || b==1){
                printf("ALMOST");
                return 0;
            }
        }
        else if(i==4){
            a = area(aray[0],aray[1],aray[2],aray[3], p, aray[5]);
            b = area(aray[0],aray[1],aray[2],aray[3], q, aray[5]);
            if(a==1 || b==1){
                printf("ALMOST");
                return 0;
            }
        }
        else if(i==5){
            a = area(aray[0],aray[1],aray[2],aray[3], aray[4], p);
            b = area(aray[0],aray[1],aray[2],aray[3], aray[4], q);
            if(a==1 || b==1){
                printf("ALMOST");
                return 0;
            }
        }
    }
    printf("NEITHER");
    return 0;
}
