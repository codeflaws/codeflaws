#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char a[100000];

    scanf("%s",a);
    int i;

    for( i =0; i<strlen(a)-1;i++)
    {
        if(a[i] =='A' && a[i+1] == 'B')
        {
            i +=2;
            while(a[i]!= NULL)
            {
                if(a[i] == 'B' && a[i+1]== 'A')
                {
                    printf("YES");
                    return 0;
                }
                else
                    i++;
            }
            if(a[i] == NULL)
                break;
        }
    }
    for(i = 0; i<strlen(a)-1; i++)
    {
         if(a[i] =='B' && a[i+1] == 'A')
        {
            i +=2;
            while(a[i]!= NULL)
            {
                if(a[i] == 'A' && a[i+1]== 'B')
                {
                    printf("YES");
                    return 0;
                }
                else
                    i++;
            }
            if(a[i] == NULL)
                break;
        }
    }
    printf("NO");
    return 0;

}
