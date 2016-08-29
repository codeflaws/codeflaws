#include<stdio.h>
//#include<conio.h>
//using namespace std;

int main(int argc, char *argv[])
{
    int n,k,i,j,count;
    scanf("%d%d",&n,&k);
    if(n%2==0)
    count=n*n/2;
    else
    count=n*n/4+((n/2)+1)*((n/2)+1);
    if(k>count)
    {
               printf("NO\n");
               return 0;
    }
    else
    {
        printf("YES\n");
        int coun=0;
        int flag=0;
        char str[105][105];
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        str[i][j]='S';
        for(i=0;i<n;i++)
        {
                        for(j=0;j<n;j++)
                        {
                                        if(coun>=k)
                                        {flag=1;break;}
                                        if((i+j)%2==0)
                                        {
                                                      str[i][j]='L';
                                                      coun++;
                                        }
                        }
                        if(flag==1)
                        break;
        }
        for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
        {printf("%c",str[i][j]);}
        printf("\n");}
    }
      //getch();                                  
    return 0;
}
