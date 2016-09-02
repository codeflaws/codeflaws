#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char a[100],c[27]=("ABCDEFGHIJKLMNOPQRSTUVWXYZ"),b[27]=("abcdefghijklmnopqrstuvwxyz");
    int i,j,count1=0,count2=0,count3=0,count4=0;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<26;j++)
        {
        if(a[i]==b[j])
            count1++;
            else
                if(a[i]==c[j])
                count2++;
        }
                if(a[i]=='!'||a[i]=='?'||a[i]=='.'||a[i]==','||a[i]=='_')
            count3++;
            else
                if(a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
            count4++;
    }
        if(count1>0&&count2>0&&count3>0&&count4>0&&strlen(a)>=5)
            printf("Correct");
        else
            printf("Too weak");
    return 0;
}
