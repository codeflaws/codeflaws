//328A.c
#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int a[4];
    scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
    int diff;
    if((a[3]-a[2])==(a[2]-a[1]) &&(a[2]-a[1])==a[1]-a[0]){

            diff=a[1]-a[0];
            printf("%d\n",a[3]+diff);
            return 0;
    }
    else if((float)a[3]/(float)a[2]==(float)a[2]/(float)a[1] && (float)a[2]/(float)a[1]==(float)a[1]/(float)a[0])
    {
    float diff1;
        if(a[0]>a[1])
        {
            diff1=(float)a[0]/a[1];
            float next=(float)a[3]/diff1;
            if(next-(int)next==0)
            {
                printf("%0.f",next);
                return 0;
            }
            else
            {
                printf("42\n");
                return 0;
            }
        }
        diff1=(float)a[3]/a[2];
        float next=a[3]*diff1;
        if(next-(int)next==0)
        printf("%d\n",next);
        else
        printf("42\n");

    }
    else
    printf("42\n");
    return 0;


}
