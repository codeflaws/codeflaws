#include <stdio.h>


int main(int argc, char *argv[])
{
int n,speed,ram,hdd,ans=0,cost;
int laptop[100][4];
scanf("%d",&n);
if(n==1){
    printf("1");
    return 0;
}
int outdated[100]={0};

for(int i=0;i<n;i++)

scanf("%d%d%d%d",&laptop[i][0],&laptop[i][1],&laptop[i][2],&laptop[i][3]);

int m=0;
for(int i=0;i<n;i++)
{
    m=0;
    for(int j=1;j+i<=3;j++){
m=0;
            for(int k=0;k<3;k++){
                if(laptop[i][k]<laptop[i+j][k])
                   m++;
            }

                   if(m==3)
                      outdated[i]=1;
    }


}






for(int i=n-1;i>=0;i--)
{
    m=0;
    for(int j=1;i-j>=0;j++){
m=0;
            for(int k=0;k<3;k++){
                if(laptop[i][k]<laptop[i-j][k])
                   m++;
            }

                   if(m==3)
                      outdated[i]=1;
    }


}








int cheapest=1000;


for(int i=0;i<n;i++)
    if(outdated[i]!=1 && laptop[i][3]<cheapest){
        cheapest=laptop[i][3];
        ans=i+1;
    }

printf("%d",ans);
return 0;
}
