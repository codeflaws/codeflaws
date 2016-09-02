#include <stdio.h>

int main(int argc, char *argv[]) {
    int n,m,cur,s,f,i,t,tmp,a[100005][3];
    scanf("%d %d %d %d",&n,&m,&s,&f);
    t=0;
    for(i=1;i<=m;i++)
    {
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
        if(a[i][0]>t)
        t=a[i][0];
    }
    cur=s;tmp=1;i=1;
    while(i<=m)
    {
        if(tmp==a[i][0])
        {
        if(cur<f)
        {
            if((cur>=a[i][1]&&cur<=a[i][2])||((cur+1)>=a[i][1]&&(cur+1)<=a[i][2]))
            printf("X");
            else
            {
                cur++;
                printf("R");
            }
        }
        else if(cur>f)
        {
            if((cur>=a[i][1]&&cur<=a[i][2])||((cur-1)>=a[i][1]&&(cur-1)<=a[i][2]))
            printf("X");
            else
            {
                cur--;
                printf("L");
            }
        }
        else if(cur==f)
        break;
        i++;
        }
        else
        {
            if(cur<f)
            {
                printf("R");
                cur++;
            }
            else if(cur>f)
            {
                printf("L");
                cur--;
            }
            else if(cur==f)
            break;
        }
        tmp++;
    }
    printf("\n");
    return 0;
}
