// Code Forces 107A
#include <stdio.h>
int main(int argc, char *argv[])
{
    int house, pipe,i,j,k=0,startSum=0,stopSum=0,sum = 0,out,sum2,flag,target,line,branch=0,end,tank,del;
    int start[1000] = {0};
    int stop[1000]  = {0};
    int diam[1000]  = {0};
    int mark[1000]  = {0};
    long last[3000]  ={0};
    long min=1000001;
    scanf("%d%d",&house,&pipe);
    if(pipe==0)
    {
        printf("0\n");
        return 0;
    }
    
    for(i=0;i<pipe;i++)
    {
        scanf("%d",&start[i]);
        scanf("%d",&stop[i]);
        scanf("%d",&diam[i]);
        startSum += start[i];
        stopSum += stop[i];
        if(diam[i]<min)
        {
            min = diam[i];
            out = i;
        }
    }
    if(pipe==1)
    {
        printf("%d %d %d\n",start[0],stop[0],diam[0]);
        return 0;
    }
    sum = (1+pipe)*pipe/2;
    sum2 = (1+house)*house/2;
    if((house-pipe==1) && (startSum==sum) && (stopSum == sum+pipe))
    {
        printf("1\n");
        printf("1 %d %d\n",house,min);      
    }
    else if((house%pipe==0) && (startSum+stopSum==sum2))
    {
        printf("%d\n",pipe);
        for(i=0;i<pipe;i++)
            printf("%d %d %d\n",start[i],stop[i],diam[i]);
    }
    else if( pipe > (house/2))
    {
        for(i=0;i<pipe;i++)
            for(j=0;j<pipe;j++)
            {
                if(start[i]==stop[j])
                {
                    branch++;
                    mark[j]=1;
                }
            }
        line = pipe-branch;
        if(line!=(house%pipe))
        {
            printf("0\n");
        }
        else
        {
            k=0;
            flag = 0;
            printf("%d\n",line);
            for(i=0;i<pipe;i++)
            {
                if(mark[i]==0)
                {
                    end = stop[i];
                    min = diam[i];
                    target = start[i];
                    while(1)
                    {
                        flag=0;                 
                        for(j=0;j<pipe;j++)
                            if(stop[j]==target)
                            {
                                target=start[j];
                                if(diam[j]<min)
                                    min=diam[j];
                                flag = 1;
                            }
                        if(flag==0)
                        {   
                            tank=target;
                            break;
                        }
                    }
                    //printf("k is %d\n",k);
                    last[k]=tank;
                    k++;
                    last[k]=end;
                    k++;
                    last[k]=min;
                    k++;
                    //printf("k is %d\n",k);
                }
            }
            while(line>0)
            {
                min=last[0];
                //printf("ok here\n");
                i=0;
                del=0;
                for(i=0;i<k;i+=3)
                    if(min>last[i])
                    {
                        min=last[i];
                        del=i;
                        
                    }
                //printf("ok here also\n");
                printf("%d %d %d\n",last[del],last[del+1],last[del+2]);
                last[del]=1000001;
                last[del+1]=1000001;
                last[del+2]=1000001;
            line--;
            }
        }
        
    }
    else
    {
        printf("0\n");
    }
    
    return 0;
}