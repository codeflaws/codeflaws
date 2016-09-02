#include<stdio.h>
int main(int argc, char *argv[])
{
    //freopen("in.txt", "r", stdin);
    int a,b,c,i,j,k,m;
    int s[300010]={0},s1[4];
    int f,g;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++){
            f=0;
           for(j=1;j<=3;j++){
            scanf("%d",&s1[j]);
        }
        for(j=1;j<=3;j++){
                c=s1[j];
            if(s[c]!=0){
                f=s[c];
                m=f;
                break;
            }
        }
        if(f==0){
            s[s1[1]]=1;
            s[s1[2]]=2;
            s[s1[3]]=3;
        }
        else if(f!=0){
            for(k=1;k<=3;k++){
                if(f==1){
                    if(s1[k]!=c){s[s1[k]]=m+1;m++;}
                }
                else if(f==2){
                    if(s1[k]!=c){s[s1[k]]=m-1;m=m+2;}
                }
                else if(f==3){
                    if(s1[k]!=c){s[s1[k]]=m-1;m--;}
                }
            }
        }
    }
    for(i=1;i<=a;i++){
        printf("%d ",s[i]);
    }
    return 0;
}
