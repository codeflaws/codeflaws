#include<stdio.h>
#include<ctype.h>
#include<string.h>

char arr[105];
int main(int argc, char *argv[])
{
    freopen("input.txt","r",stdin);
    int i,j,k,l;
    gets(arr);
    l=strlen(arr);
    for(i=l-1;i>=0;i--)
    {
        if(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'||arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='Y'||arr[i]=='y')
        {
            printf("YES");
            break;
        }
        else if((arr[i]>='B'&&arr[i]<='Z')||(arr[i]>='b'&&arr[i]<='z'))
        {
            printf("NO");
            break;
        }
    }
    return 0;
}
