#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){    
    char n[15];
    scanf("%s",n);
    int i,sp=1;
    char t='\0';
    for(i=0;i<strlen(n);i++){
        if(n[i]!='0'&&i!=strlen(n)-1&&n[i+1]!=':'&&n[i]!=':'||n[i+1]==':'&&n[i]>'n'){sp=0;}
        if(n[i]!=':'&&t<n[i]){
            t=n[i];
        }
    }
    if(sp){
        puts("-1");
        return 0;
    }
    int sys;
    if(t>60){
        sys=t-65+11;
    }else{
        sys=t-47;
    }
    int sum=0,tp=0,f=sys;
    
        for(;;sys++){
            for(i=0;n[i]!=':';i++){
                if(n[i]>60){
                tp=n[i]-65+10;
                }else{
                tp=n[i]-48;
                }
                sum=sum*sys+tp;
            }
            if(sum>23){
                if(sys==f){puts("0");}
                return 0;
            }sum=0;
            for(i=i+1;i<strlen(n);i++){
                if(n[i]>60){
                tp=n[i]-65+10;
                }else{
                tp=n[i]-48;
                }
                sum=sum*sys+tp;
            }
            if(sum>59){
                if(sys==f){puts("0");}
                return 0;
            }
            sum=0;
            printf("%d ",sys);
        }
             
}
