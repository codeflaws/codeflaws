#include<stdio.h>
char arr[200001];
char arr1[200001];
int solver(char *q,char *s,int a){
 int i;
 int cnt=0;
 for(i=0;i<a;i++){
        if(q[i]!=s[i]){
                cnt++;
        }
 }
 return cnt;
}
int main(int argc, char *argv[]){
int a,b,c,d;
scanf("%d",&a);
getchar();
gets(arr);
gets(arr1);
int x=solver(arr,arr1,a);
int ind=0;
int index=-1,index1=-1;
for(b='x';b<='z';b++){
        for(c='a';c<='z';c++){
            if(c==b)
            continue;
            for(d=0;d<a;d++){
                if(arr[d]==b && arr1[d]==c){
                    index=d+1;
                    ind++;}
                if(arr[d]==c && arr1[d]==b){
                    index1=d+1;
                    ind++;}
            }
        if(ind>=2 && index!=-1 && index1!=-1){
        printf("%d\n%d %d",x-2,index,index1); return 0;}
            index=-1;
            index1=-1;
            ind=0;
        }
}
for(b='a';b<='z';b++){
for(d=0;d<a;d++){
    if(arr[d]==b && arr[d]!=arr1[d]){
    index=d+1;
    ind++;}
    if(arr1[d]==b && arr1[d]!=arr[d]){
        index1=d+1;
        ind++;}
}
if(ind>=2 && index!=-1 && index1!=-1){
           printf("%d\n%d %d",x-1,index,index1);
           return 0;
    }
    index=-1;
    index1=-1;
    ind=0;
}
printf("%d\n-1 -1",x);
}
