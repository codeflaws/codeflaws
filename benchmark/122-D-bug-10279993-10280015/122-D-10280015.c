#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char lucky[100005];
    long long k;
    int n,i,flag=0;
    scanf("%d %d",&n,&k);
    scanf("%s",&lucky);

        for(i=0;i<n-1&&k>0;i++){
            if(lucky[i]=='4'&&lucky[i+1]=='7'){

                if(i%2==0){lucky[i+1]='4';}
                else if(i>0&&lucky[i-1]=='4'){
                    if(k%2==0)lucky[i]='4';
                    else lucky[i]='7';
                    break;
                }
                else lucky[i]='7';
                k--;

            }
        }

    printf("%s",lucky);
    return 0;
}
