#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int n,i,max1,max2,j;
    long min1,min2,ind,tot;
    tot=0;
    max1=-1;
    max2=-1;
    min1=40000;
    ind=0;
    
    
    scanf("%d",&n);
    long arr[n][4];
    long arr2[n][8];
    
    long out[8];
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%ld",&arr[i][j]);
        }
        
    }
    for(i=0;i<n;i++)
    {
    
    arr2[i][7]=arr[i][1];
    arr2[i][4]=arr[i][0];
    arr2[i][6]=arr[i][2];
    arr2[i][0]=arr[i][0];
    arr2[i][1]=arr[i][1];
    arr2[i][2]=arr[i][2];
    arr2[i][3]=arr[i][3];
    arr2[i][5]=arr[i][3];

    
    }
    
    
            for(i=0;i<n;i++)
            {ind=ind+abs(arr2[i][5]-arr2[i][1])*abs(arr2[i][6]-arr2[i][0])  ;
                for(j=0;j<8;j+=2)
                {if(arr2[i][j]>max1)
                max1=arr2[i][j];
                if(arr2[i][j]<min1)
                min1=arr2[i][j];
                
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=1;j<8;j+=2)
                {if(arr2[i][j]>max2)
                max2=arr2[i][j];
                if(arr2[i][j]<min2)
                min2=arr2[i][j];
                    
                }
            }
            tot=(max1-min1)*(max1-min1);
            if(max1-min1==max2-min2&&ind==tot)
            printf("YES");
            else
            printf("NO");
           
           
           
    return 0;
}