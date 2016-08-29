#include<stdio.h>
int main(int argc, char *argv[]){
    int a,b,t,t_div;
    scanf("%d %d",&a,&b);
    t=a+b;
    t_div=t/3;
    if(a>=t_div && b>=t_div){
        printf("%d",t_div);
    }
    else if(a>=t_div && b<t_div){
        printf("%d",b);
    }
    else if(a<t_div){
        printf("%d",a);
        
    }
    else if(a==0 || t_div==0 ||b==0)
    {
    printf("0");}
    
    
    
    return 0;
}