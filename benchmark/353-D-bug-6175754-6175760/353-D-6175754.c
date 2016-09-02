#include <stdio.h>
#include <stdlib.h>


char arr[1000000+10];
int del[10000000+10];
int main(int argc, char *argv[])
{

    int i=0;
    int c=0;
    int counter=0;

    for(i=0;i==0||arr[i-1]!='\n';i++)
    {
        scanf("%c",&arr[i]);
        if(arr[i]=='F')
            counter++;
    }
    int temp=i;
    i=0;
    int lastF=-1;
    int place = 0;

        for(c=0;c<temp;c++)
        {
            if(arr[c]=='F'&&place==c)
            {
                place++;
                del[c]=0;
                lastF=c;
            }
            else if(arr[c]=='F'&&arr[c-1]=='M')
            {
                if(lastF==-1)
                {
                    del[c]=0;
                    lastF=c;
                    i=c-place;
                    place++;
                }
                else
                {
                    del[c]=del[lastF]- (c- lastF-1) +1;
                    if(del[lastF]!=0&&del[lastF]>=(c-lastF-1))
                    {
                        i=c-place;
                        i+= del[lastF]- (c- lastF-1) +1;
                    }
                    else
                        i=c-place;
                    lastF=c;
                    place++;
                }
            }
            else if(arr[c]=='F'&&arr[c-1]=='F')
            {
                del[c]=del[c-1]+1;
                i=c-place;
                i+=del[c];
                place++;
                lastF=c;
            }
        }
    printf("%d",i);
    return 0;
}
