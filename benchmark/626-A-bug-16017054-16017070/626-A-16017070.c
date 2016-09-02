#include<stdio.h>
#include<string.h>
#include<math.h>
int main(int argc, char *argv[]){
char arr[500];
int input;
scanf("%d",&input);
getchar();
gets(arr);
int x=strlen(arr);
int a,b,c,d;
int cnt=0;
int ind;
int f=0;
int l=0;
int res=0,res1=0;
for(a=0;a<x;a++){
        for(b=a;b<x;b++){
            res=0,res1=0;
            f=arr[a];
            for(c=a;c<=b;c++){
                   if(arr[c]=='U'){
                        res++;
                   }
                   if(arr[c]=='D')
                   {
                       res--;
                   }
                   if(arr[c]=='L'){
                        res1--;
                   }
                   if(arr[c]=='R'){
                        res1++;
                   }
                   l=arr[c];
            }
            if(res==0 && res1==0){
                cnt++;
            }
        }
}

printf("%d",cnt);

return 0;
}
