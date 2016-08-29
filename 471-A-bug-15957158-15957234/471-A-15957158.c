#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int i,j,h=0,k;
int arr[6];
for(i=0;i<6;i++)
    scanf("%d",&arr[i]);
for(i=0;i<6;i++)
{for(j=i+1;j<6;j++)
{
    if(arr[i]<arr[j])
    {
        k=arr[i];
        arr[i]=arr[j];
        arr[j]=k;
    }
}


}
for(i=5;i>=0;i--)
{if(arr[i]==arr[3])
h++;

}

if(h<=3)
    printf("Alien");
else
{if(arr[0]==arr[1])
     printf("Elephant");
     else
        printf("Bear");







}
    return 0;
}
