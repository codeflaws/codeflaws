#include <stdio.h>
int main(int argc, char *argv[])
{
    char str[100],temp;

    int i,j,k;
    int n,n1;
    scanf("%d%d",&n1,&n);

    for(i=0;i<=n1;i++){
        scanf("%c",&str[i]);
        //getchar();
    }
    //getchar();
    //printf("i==%d\n",i);
    str[i]='\0';
    //printf("%s\n",str);
    while(n--)
    {
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]=='B'&&str[i+1]=='G')
            {
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
                i++;
            }
        }
        printf("%s\n",str);

    }


    return 0;
}
