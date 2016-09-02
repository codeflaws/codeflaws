#include<stdio.h>
int main(int argc, char *argv[]){
long int a[3][2];
int i,j,m1,m2,ans;
//freopen("d.txt","r",stdin);
//freopen("d1.txt","w",stdout);
for(i=0;i<3;i++)
    for(j=0;j<2;j++)
        scanf("%ld",&a[i][j]);
if((a[0][0]!=a[1][0])&&(a[0][1]!=a[1][1])){
m1=(a[1][1]-a[0][1])/(a[1][0]-a[0][0]);m2=(a[2][1]-a[1][1])/(a[2][0]-a[1][0]);
if(m1==m2) ans=0;
else{
    if(a[1][1]>a[0][1]){if(a[2][0]>a[1][0])ans=1;else ans=-1;}
    else{if(a[2][0]<a[1][0])ans=1;else ans=-1;}
}
}
else{
    if(a[0][0]==a[1][0]){
        if(a[0][0]==a[2][0])ans=0;
        else{
            if(a[1][1]>a[0][1]){if(a[2][0]>a[1][0])ans=1;else ans=-1;}
    else{if(a[2][0]<a[1][0])ans=1;else ans=-1;}
        }
    }
    else{
        if(a[1][1]==a[2][1])ans=0;
        else{
            if(a[0][0]<a[1][0]){if(a[2][1]>a[1][1])ans=-1;else ans=1;}
    else{if(a[2][1]<a[1][1])ans=1;else ans=-1;}
        }
    }
}
if(ans==0)printf("TOWARDS");
else if(ans==1)printf("RIGHT");
else printf("LEFT");
return 0;
}
