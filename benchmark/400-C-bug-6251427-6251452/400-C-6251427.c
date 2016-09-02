#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,x,y,z,p,i,w,a,b;
    while(scanf("%d%d%d%d%d%d",&n,&m,&x,&y,&z,&p)!=EOF)
    {
        if(y%2==0)
        {
            w=(x%4-z%4+4)%4;
            switch(w)
            {
            case 0:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",a,b);}break;
            case 1:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",b,n+1-a);}break;
            case 2:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",n+1-a,m+1-b);}break;
            case 3:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",m+1-b,a);}break;
            }
        }
        else
        {
            w=(x%4)*4+4-z%4;
            switch(w)
            {
            case 0:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",a,m+1-b);}break;
            case 1:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",m+1-b,n+1-a);}break;
            case 2:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",n+1-a,b);}break;
            case 3:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",b,a);}break;

            case 4:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",b,a);}break;
            case 5:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",a,m+1-b);}break;
            case 6:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",m+1-b,n+1-a);}break;
            case 7:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",n+1-a,b);}break;

            case 8:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",n+1-a,b);}break;
            case 9:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",b,a);}break;
            case 10:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",a,m+1-b);}break;
            case 11:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",m+1-b,n+1-a);}break;

            case 12:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",m+1-b,n+1-a);}break;
            case 13:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",n+1-a,b);}break;
            case 14:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",b,a);}break;
            case 15:for(i=1;i<=p;i++){scanf("%d%d",&a,&b);printf("%d %d\n",a,m+1-b);}break;
            }
        }
    }
    return 0;
}