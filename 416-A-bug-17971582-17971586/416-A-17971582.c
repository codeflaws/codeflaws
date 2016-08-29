#include <stdio.h>
int main(int argc, char *argv[])
{
    int n, i, x;
    int min=-2000000000, max=2000000000;
    char op[3], is[3];
    scanf("%lld", &n);
    for(i=0; i<n; i++)
    {
        //printf("i=%d\n", i);
        scanf("%s", op);
        //printf("%s\n", op);
        scanf("%d", &x);
        scanf("%s", &is);
        if(op[0]=='>')
        {
            if(op[1]=='\0')
            {
                //printf("entering > case\n");
                if(is[0]=='Y')
                {
                    if(x+1>min)
                        min=x+1;
                }
                else if(is[0]=='N')
                {
                    if(x<max)
                        max=x;
                }
                //printf("min=%d max=%d\n", min, max);
            }
            else if(op[1]=='=')
            {
                //printf("entering >= case\n");
                if(is[0]=='Y')
                {
                    if(x>min)
                        min=x;
                }
                else if(is[0]=='N')
                {
                    if(x-1<max)
                        max=x-1;
                }
                //printf("min=%d max=%d\n", min, max);
            }
        }
        else if(op[0]=='<')
        {
            if(op[1]=='\0')
            {
                //printf("entering < case\n");
                if(is[0]=='N')
                {
                    if(x>min)
                        min=x;
                }
                else if(is[0]=='Y')
                {
                    if(x-1<max)
                        max=x-1;
                }
                //printf("min=%d max=%d\n", min, max);
            }
            else if(op[1]=='=')
            {
                //printf("entering <= case\n");
                if(is[0]=='N')
                {
                    if(x+1>min)
                        min=x+1;
                }
                else if(is[0]=='Y')
                {
                    if(x<max)
                        max=x;
                }
                //printf("min=%d max=%d\n", min, max);
            }
        }
    }
    printf("min=%d max=%d\n", min, max);
    if(min<=max)
        printf("%d\n",min);
    else
        printf("Impossible\n");
    return 0;
}
